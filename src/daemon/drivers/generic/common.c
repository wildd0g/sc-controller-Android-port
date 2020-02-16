/**
 * Generic SC-Controller driver - common code for generic driver
 */
#include "generic.h"
#include "scc/utils/container_of.h"
#include "scc/utils/strbuilder.h"
#include "scc/utils/math.h"
#include "scc/controller.h"
#include "scc/mapper.h"
#include "scc/tools.h"
#include <math.h>

struct _DerivedFromGenericController {
	Controller				controller;
	GenericController		gc;
};

inline static GenericController* get_gc_from_controller_instance(Controller* c) {
	// This depends on every structure that uses GenericController starting
	// with same field order
	struct _DerivedFromGenericController* dgc;
	dgc = container_of(c, struct _DerivedFromGenericController, controller);
	return &dgc->gc;
}


bool gc_alloc(Daemon* d, GenericController* gc) {
	gc->daemon = d;
	gc->mapper = NULL;
	gc->button_map = intmap_new();
	gc->axis_map = intmap_new();
	return (gc->button_map != NULL) && (gc->axis_map != NULL);
}

static int axis_data_dealloc(any_t item, any_t _data) {
	free(_data);
	return MAP_OK;
}

void gc_dealloc(GenericController* gc) {
	if (gc->button_map != NULL) {
		intmap_free(gc->button_map);
		gc->button_map = NULL;
	}
	if (gc->axis_map != NULL) {
		intmap_iterate(gc->axis_map, axis_data_dealloc, NULL);
		intmap_free(gc->axis_map);
		gc->axis_map = NULL;
	}
}

const char* gc_get_id(Controller* c) {
	GenericController* gc = get_gc_from_controller_instance(c);
	return gc->id;
}

const char* gc_get_description(Controller* c) {
	GenericController* gc = get_gc_from_controller_instance(c);
	return gc->desc;
}

void gc_set_mapper(Controller* c, Mapper* mapper) {
	GenericController* gc = get_gc_from_controller_instance(c);
	gc->mapper = mapper;
}

void gc_turnoff(Controller* c) {
}

void gc_cancel_padpress_emulation(void* _gc) {
	GenericController* gc = (GenericController*)_gc;
	Daemon* d = gc->daemon;
	bool needs_reschedule = false;
	if ((gc->input.buttons & B_LPADTOUCH) != 0) {
		if ((gc->input.lpad_x == 0) && (gc->input.lpad_y == 0))
			gc->input.buttons &= ~(B_LPADPRESS | B_LPADTOUCH);
		else
			needs_reschedule = true;
	}
	if ((gc->input.buttons & B_RPADTOUCH) != 0) {
		if ((gc->input.rpad_x == 0) && (gc->input.rpad_y == 0))
			gc->input.buttons &= ~B_RPADTOUCH;
		else
			needs_reschedule = true;
	}
	if (needs_reschedule)
		gc->padpressemu_task = d->schedule(PADPRESS_EMULATION_TIMEOUT,
										gc_cancel_padpress_emulation, gc);
	else
		gc->padpressemu_task = 0;
	
	if (gc->mapper != NULL)
		gc->mapper->input(gc->mapper, &gc->input);
}

void gc_make_id(const char* base, GenericController* gc) {
	int counter = 0;
	do {
		static char buffer[32];
		strncpy(gc->id, base, MAX_ID_LEN - 1);
		gc->id[MAX_ID_LEN - 1] = 0;
		if (counter > 0) {
			snprintf(buffer, 31, "%x", counter);
			size_t len = min(strlen(gc->id), MAX_ID_LEN - strlen(gc->id) - 1);
			strcpy(gc->id + len, buffer);
		}
		counter ++;
	} while (gc->daemon->get_controller_by_id(gc->id) != NULL);
}



static AxisData* parse_axis(json_object* data) {
	bool valid = false;
	AxisData* ad = malloc(sizeof(AxisData));
	if (ad == NULL) return NULL;
	
	ad->clamp_min = STICK_PAD_MIN;
	ad->clamp_max = STICK_PAD_MAX;
	
	int min = json_object_get_double(data, "min", &valid);
	if (!valid) min = -127;
	int max = json_object_get_double(data, "max", &valid);
	if (!valid) max = 128;
	double deadzone = json_object_get_double(data, "deadzone", &valid);
	if (!valid) deadzone = 0;
	ad->center = json_object_get_double(data, "center", &valid);
	if (!valid) ad->center = 0;
	
	ad->offset = 0;
	if ((max >= 0) && (min >= 0))
		ad->offset = 1;
	if (min == max) {
		ad->scale = 1.0;
	} else {
		ad->scale = -2.0 / (double)(min - max);
		if (max > min)
			ad->offset *= -1.0;
	}
	ad->deadzone = fabs(deadzone * ad->scale);
	return ad;
}

static AxisID parse_axis_name(const char* s) {
	if (s == NULL) return A_NONE;
	// TODO: Use stricmp here?
	switch (s[0]) {
	case 'L':
	case 'l':
		if (0 == strcmp("lpad_x", s)) return A_LPAD_X;
		if (0 == strcmp("lpad_y", s)) return A_LPAD_Y;
		if (0 == strcmp("ltrig", s))  return A_LTRIG;
		break;
	case 'R':
	case 'r':
		if (0 == strcmp("rpad_x", s)) return A_RPAD_X;
		if (0 == strcmp("rpad_y", s)) return A_RPAD_Y;
		if (0 == strcmp("rtrig", s))  return A_RTRIG;
		break;
	case 'S':
	case 's':
		if (0 == strcmp("stick_x", s)) return A_STICK_X;
		if (0 == strcmp("stick_y", s)) return A_STICK_Y;
		break;
	}
	return A_NONE;
}

bool load_button_map(const char* name, json_object* json, GenericController* gc) {
	intmap_t button_map = gc->button_map;
	if (json == NULL) return true;
	
	for(size_t i=0; i<json_object_numkeys(json); i++) {
		const char* key = json_object_get_key(json, i);
		char* value = json_object_get_string(json, key);
		if (value == NULL) continue;
		SCButton b = scc_string_to_button(value);
		char* ok = NULL;
		int k = strtol(key, &ok, 10);
		if (ok == key) {
			WARN("Ignoring mapping for '%s': '%s' is not a number", name, key);
			continue;
		}
		if (b == 0) {
			WARN("Ignoring mapping for '%s': Unknown button '%s'", name, value);
			continue;
		}
		if (intmap_put(button_map, k, (any_t)b) == MAP_OMEM)
			return false;
	}
	
	return true;
}


bool load_axis_map(const char* name, json_object* json, GenericController* gc) {
	intmap_t axis_map = gc->axis_map;
	if (json == NULL) return true;
	
	for(size_t i=0; i<json_object_numkeys(json); i++) {
		const char* key = json_object_get_key(json, i);
		json_object* value = json_object_get_object(json, key);
		if (value == NULL) continue;
		char* ok = NULL;
		int k = strtol(key, &ok, 10);
		if (ok == key) {
			WARN("Ignoring mapping for '%s': '%s' is not a number", name, key);
			continue;
		}
		AxisID axis = parse_axis_name(json_object_get_string(value, "axis"));
		if (axis == A_NONE) {
			WARN("Ignoring mapping for '%s': '%s' is not valid axis name", name,
					json_object_get_string(value, "axis"));
			continue;
		}
		AxisData* data = parse_axis(value);
		if (data == NULL)
			return false;
		data->axis = axis;
		if ((data->axis == A_LTRIG) || (data->axis == A_RTRIG)) {
			data->clamp_min = TRIGGER_MIN;
			data->clamp_max = TRIGGER_MAX;
			data->offset += 1.0;
			data->scale *= 0.5;
		}
		
		if (intmap_put(axis_map, k, (any_t)data) == MAP_OMEM) {
			free(data);
			return false;
		}
	}
	
	return true;
}


void apply_axis(const AxisData* a, double value, ControllerInput* input) {
	value = (value * a->scale) + a->offset;
	if ((value >= -a->deadzone) && (value <= a->deadzone))
		value = 0;
	else
		value = clamp(a->clamp_min, value * a->clamp_max, a->clamp_max);
	
	switch (a->axis) {
	case A_NONE:
		break;
	case A_LTRIG:
	case A_RTRIG:
		input->triggers[a->axis - A_LTRIG] = value;
		break;
	case A_LPAD_X:
	case A_LPAD_Y:
		input->buttons |= B_LPADTOUCH | B_LPADPRESS;
		input->axes[a->axis] = value;
		break;
	case A_RPAD_X:
	case A_RPAD_Y:
		input->buttons |= B_RPADTOUCH;
		input->axes[a->axis] = value;
		break;
	default:
		if ((a->axis < A_STICK_X) || (a->axis > A_CPAD_Y))
			break;
		input->axes[a->axis] = value;
		break;
	}
}

