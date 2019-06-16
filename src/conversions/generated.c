/*
 * SC Controller - Autogenerated mapping of KEY_* constants to everything
 * This is used by uinput, its emulation, parser and by OSD.
 *
 * ========= THIS FILE IS AUTOGENERATED ==========
 *
 * Generated by generate-constants.py from include/scc/input-event-codes.h
 * and some hardcoded maps.
 */
#include "scc/utils/hashmap.h"
#include "scc/utils/assert.h"
#include "scc/input-event-codes.h"
#include "conversions.h"
#include <unistd.h>
#include <stdint.h>

#ifndef GDK_KEYCODE
#	define GDK_KEYCODE(x)	0
#endif

const uint16_t SCC_KEYCODE_MAX = 248;
const size_t SCC_REL_ABS_MAX = 174;

struct Item keys[] = {
	{ 0,	"KEY_RESERVED", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 1,	"KEY_ESC", 0x70029, 0x9, 0x1, GDK_KEYCODE(GDK_KEY_Escape) },
	{ 2,	"KEY_1", 0x7001E, 0xA, 0x2, GDK_KEYCODE(GDK_KEY_1) },
	{ 3,	"KEY_2", 0x7001F, 0xB, 0x3, GDK_KEYCODE(GDK_KEY_2) },
	{ 4,	"KEY_3", 0x70020, 0xC, 0x4, GDK_KEYCODE(GDK_KEY_3) },
	{ 5,	"KEY_4", 0x70021, 0xD, 0x5, GDK_KEYCODE(GDK_KEY_4) },
	{ 6,	"KEY_5", 0x70022, 0xE, 0x6, GDK_KEYCODE(GDK_KEY_5) },
	{ 7,	"KEY_6", 0x70023, 0xF, 0x7, GDK_KEYCODE(GDK_KEY_6) },
	{ 8,	"KEY_7", 0x70024, 0x10, 0x8, GDK_KEYCODE(GDK_KEY_7) },
	{ 9,	"KEY_8", 0x70025, 0x11, 0x9, GDK_KEYCODE(GDK_KEY_8) },
	{ 10,	"KEY_9", 0x70026, 0x12, 0xA, GDK_KEYCODE(GDK_KEY_9) },
	{ 11,	"KEY_0", 0x70027, 0x13, 0xB, GDK_KEYCODE(GDK_KEY_0) },
	{ 12,	"KEY_MINUS", 0x7002D, 0x14, 0xC, GDK_KEYCODE(GDK_KEY_minus) },
	{ 13,	"KEY_EQUAL", 0x7002E, 0x15, 0xD, GDK_KEYCODE(GDK_KEY_equal) },
	{ 14,	"KEY_BACKSPACE", 0x7002A, 0x16, 0xE, GDK_KEYCODE(GDK_KEY_BackSpace) },
	{ 15,	"KEY_TAB", 0x7002B, 0x17, 0xF, GDK_KEYCODE(GDK_KEY_Tab) },
	{ 16,	"KEY_Q", 0x70014, 0x18, 0x10, GDK_KEYCODE(GDK_KEY_q) },
	{ 17,	"KEY_W", 0x7001A, 0x19, 0x11, GDK_KEYCODE(GDK_KEY_w) },
	{ 18,	"KEY_E", 0x70008, 0x1A, 0x12, GDK_KEYCODE(GDK_KEY_e) },
	{ 19,	"KEY_R", 0x70015, 0x1B, 0x13, GDK_KEYCODE(GDK_KEY_r) },
	{ 20,	"KEY_T", 0x70017, 0x1C, 0x14, GDK_KEYCODE(GDK_KEY_t) },
	{ 21,	"KEY_Y", 0x7001C, 0x1D, 0x15, GDK_KEYCODE(GDK_KEY_y) },
	{ 22,	"KEY_U", 0x70018, 0x1E, 0x16, GDK_KEYCODE(GDK_KEY_u) },
	{ 23,	"KEY_I", 0x7000C, 0x1F, 0x17, GDK_KEYCODE(GDK_KEY_i) },
	{ 24,	"KEY_O", 0x70012, 0x20, 0x18, GDK_KEYCODE(GDK_KEY_o) },
	{ 25,	"KEY_P", 0x70013, 0x21, 0x19, GDK_KEYCODE(GDK_KEY_p) },
	{ 26,	"KEY_LEFTBRACE", 0x7002F, 0x22, 0x1A, GDK_KEYCODE(GDK_KEY_bracketleft) },
	{ 27,	"KEY_RIGHTBRACE", 0x70030, 0x23, 0x1B, GDK_KEYCODE(GDK_KEY_bracketright) },
	{ 28,	"KEY_ENTER", 0x70028, 0x24, 0x1C, GDK_KEYCODE(GDK_KEY_Return) },
	{ 29,	"KEY_LEFTCTRL", 0x700E0, 0x25, 0x1D, GDK_KEYCODE(GDK_KEY_Control_L) },
	{ 30,	"KEY_A", 0x70004, 0x26, 0x1E, GDK_KEYCODE(GDK_KEY_a) },
	{ 31,	"KEY_S", 0x70016, 0x27, 0x1F, GDK_KEYCODE(GDK_KEY_s) },
	{ 32,	"KEY_D", 0x70007, 0x28, 0x20, GDK_KEYCODE(GDK_KEY_d) },
	{ 33,	"KEY_F", 0x70009, 0x29, 0x21, GDK_KEYCODE(GDK_KEY_f) },
	{ 34,	"KEY_G", 0x7000A, 0x2A, 0x22, GDK_KEYCODE(GDK_KEY_g) },
	{ 35,	"KEY_H", 0x7000B, 0x2B, 0x23, GDK_KEYCODE(GDK_KEY_h) },
	{ 36,	"KEY_J", 0x7000D, 0x2C, 0x24, GDK_KEYCODE(GDK_KEY_j) },
	{ 37,	"KEY_K", 0x7000E, 0x2D, 0x25, GDK_KEYCODE(GDK_KEY_k) },
	{ 38,	"KEY_L", 0x7000F, 0x2E, 0x26, GDK_KEYCODE(GDK_KEY_l) },
	{ 39,	"KEY_SEMICOLON", 0x70033, 0x2F, 0x27, GDK_KEYCODE(GDK_KEY_semicolon) },
	{ 40,	"KEY_APOSTROPHE", 0x70034, 0x30, 0x28, GDK_KEYCODE(GDK_KEY_apostrophe) },
	{ 41,	"KEY_GRAVE", 0x70035, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_grave) },
	{ 42,	"KEY_LEFTSHIFT", 0x700E1, 0x32, 0x2A, GDK_KEYCODE(GDK_KEY_Shift_L) },
	{ 43,	"KEY_BACKSLASH", 0x70032, 0x33, 0x29, GDK_KEYCODE(GDK_KEY_backslash) },
	{ 44,	"KEY_Z", 0x7001D, 0x34, 0x2C, GDK_KEYCODE(GDK_KEY_z) },
	{ 45,	"KEY_X", 0x7001B, 0x35, 0x2D, GDK_KEYCODE(GDK_KEY_x) },
	{ 46,	"KEY_C", 0x70006, 0x36, 0x2E, GDK_KEYCODE(GDK_KEY_c) },
	{ 47,	"KEY_V", 0x70019, 0x37, 0x2F, GDK_KEYCODE(GDK_KEY_v) },
	{ 48,	"KEY_B", 0x70005, 0x38, 0x30, GDK_KEYCODE(GDK_KEY_b) },
	{ 49,	"KEY_N", 0x70011, 0x39, 0x31, GDK_KEYCODE(GDK_KEY_n) },
	{ 50,	"KEY_M", 0x70010, 0x3A, 0x32, GDK_KEYCODE(GDK_KEY_m) },
	{ 51,	"KEY_COMMA", 0x70036, 0x3B, 0x33, GDK_KEYCODE(GDK_KEY_comma) },
	{ 52,	"KEY_DOT", 0x70037, 0x3C, 0x34, GDK_KEYCODE(GDK_KEY_period) },
	{ 53,	"KEY_SLASH", 0x70038, 0x3D, 0x35, GDK_KEYCODE(GDK_KEY_slash) },
	{ 54,	"KEY_RIGHTSHIFT", 0x700E5, 0x3E, 0x36, GDK_KEYCODE(GDK_KEY_Shift_R) },
	{ 55,	"KEY_KPASTERISK", 0x70055, 0x3F, 0x0, GDK_KEYCODE(GDK_KEY_KP_Multiply) },
	{ 56,	"KEY_LEFTALT", 0x700E2, 0x40, 0x38, GDK_KEYCODE(GDK_KEY_Alt_L) },
	{ 57,	"KEY_SPACE", 0x7002C, 0x41, 0x39, GDK_KEYCODE(GDK_KEY_space) },
	{ 58,	"KEY_CAPSLOCK", 0x70039, 0x42, 0x3A, GDK_KEYCODE(GDK_KEY_Caps_Lock) },
	{ 59,	"KEY_F1", 0x7003A, 0x43, 0x3B, GDK_KEYCODE(GDK_KEY_F1) },
	{ 60,	"KEY_F2", 0x7003B, 0x44, 0x3C, GDK_KEYCODE(GDK_KEY_F2) },
	{ 61,	"KEY_F3", 0x7003C, 0x45, 0x3D, GDK_KEYCODE(GDK_KEY_F3) },
	{ 62,	"KEY_F4", 0x7003D, 0x46, 0x3E, GDK_KEYCODE(GDK_KEY_F4) },
	{ 63,	"KEY_F5", 0x7003E, 0x47, 0x3F, GDK_KEYCODE(GDK_KEY_F5) },
	{ 64,	"KEY_F6", 0x7003F, 0x48, 0x40, GDK_KEYCODE(GDK_KEY_F6) },
	{ 65,	"KEY_F7", 0x70040, 0x49, 0x41, GDK_KEYCODE(GDK_KEY_F7) },
	{ 66,	"KEY_F8", 0x70041, 0x4A, 0x42, GDK_KEYCODE(GDK_KEY_F8) },
	{ 67,	"KEY_F9", 0x70042, 0x4B, 0x43, GDK_KEYCODE(GDK_KEY_F9) },
	{ 68,	"KEY_F10", 0x70043, 0x4C, 0x44, GDK_KEYCODE(GDK_KEY_F10) },
	{ 69,	"KEY_NUMLOCK", 0x70053, 0x4D, 0x0, GDK_KEYCODE(GDK_KEY_Num_Lock) },
	{ 70,	"KEY_SCROLLLOCK", 0x70047, 0x4E, 0x0, GDK_KEYCODE(GDK_KEY_Scroll_Lock) },
	{ 71,	"KEY_KP7", 0x7005F, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_KP_7) },
	{ 72,	"KEY_KP8", 0x70060, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_KP_8) },
	{ 73,	"KEY_KP9", 0x70061, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_KP_9) },
	{ 74,	"KEY_KPMINUS", 0x70056, 0x52, 0x4A, GDK_KEYCODE(GDK_KEY_KP_Subtract) },
	{ 75,	"KEY_KP4", 0x7005C, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_KP_4) },
	{ 76,	"KEY_KP5", 0x7005D, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_KP_5) },
	{ 77,	"KEY_KP6", 0x7005E, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_KP_6) },
	{ 78,	"KEY_KPPLUS", 0x70057, 0x56, 0x4E, GDK_KEYCODE(GDK_KEY_KP_Add) },
	{ 79,	"KEY_KP1", 0x70059, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_KP_1) },
	{ 80,	"KEY_KP2", 0x7005A, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_KP_2) },
	{ 81,	"KEY_KP3", 0x7005B, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_KP_3) },
	{ 82,	"KEY_KP0", 0x70062, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_KP_0) },
	{ 83,	"KEY_KPDOT", 0x70063, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_KP_Delete) },
	{ 84 },
	{ 85,	"KEY_ZENKAKUHANKAKU", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 86,	"KEY_102ND", 0x70064, 0x3D, 0x2B, GDK_KEYCODE(0) },
	{ 87,	"KEY_F11", 0x70044, 0x5F, 0x57, GDK_KEYCODE(GDK_KEY_F11) },
	{ 88,	"KEY_F12", 0x70045, 0x60, 0x58, GDK_KEYCODE(GDK_KEY_F12) },
	{ 89,	"KEY_RO", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 90,	"KEY_KATAKANA", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 91,	"KEY_HIRAGANA", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 92,	"KEY_HENKAN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 93,	"KEY_KATAKANAHIRAGANA", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 94,	"KEY_MUHENKAN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 95,	"KEY_KPJPCOMMA", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 96,	"KEY_KPENTER", 0x70058, 0x68, 0xE01C, GDK_KEYCODE(GDK_KEY_KP_Enter) },
	{ 97,	"KEY_RIGHTCTRL", 0x700E4, 0x69, 0xE01D, GDK_KEYCODE(GDK_KEY_Control_R) },
	{ 98,	"KEY_KPSLASH", 0x70054, 0x6A, 0x0, GDK_KEYCODE(GDK_KEY_KP_Divide) },
	{ 99,	"KEY_SYSRQ", 0x70046, 0x6B, 0x37, GDK_KEYCODE(GDK_KEY_Sys_Req) },
	{ 100,	"KEY_RIGHTALT", 0x700E6, 0x6C, 0xE038, GDK_KEYCODE(GDK_KEY_Alt_R) },
	{ 101,	"KEY_LINEFEED", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 102,	"KEY_HOME", 0x7004A, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_Home) },
	{ 103,	"KEY_UP", 0x70052, 0x6F, 0xE048, GDK_KEYCODE(GDK_KEY_Up) },
	{ 104,	"KEY_PAGEUP", 0x7004B, 0x70, 0xE049, GDK_KEYCODE(GDK_KEY_Page_Up) },
	{ 105,	"KEY_LEFT", 0x70050, 0x71, 0xE04B, GDK_KEYCODE(GDK_KEY_Left) },
	{ 106,	"KEY_RIGHT", 0x7004F, 0x72, 0xE04D, GDK_KEYCODE(GDK_KEY_Right) },
	{ 107,	"KEY_END", 0x7004D, 0x73, 0xE04F, GDK_KEYCODE(GDK_KEY_End) },
	{ 108,	"KEY_DOWN", 0x70051, 0x74, 0xE050, GDK_KEYCODE(GDK_KEY_Down) },
	{ 109,	"KEY_PAGEDOWN", 0x7004E, 0x75, 0xE051, GDK_KEYCODE(GDK_KEY_Page_Down) },
	{ 110,	"KEY_INSERT", 0x70049, 0x76, 0xE052, GDK_KEYCODE(GDK_KEY_Insert) },
	{ 111,	"KEY_DELETE", 0x7004C, 0x77, 0xE053, GDK_KEYCODE(GDK_KEY_Delete) },
	{ 112,	"KEY_MACRO", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 113,	"KEY_MUTE", 0xC00E2, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 114,	"KEY_VOLUMEDOWN", 0xC00EA, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 115,	"KEY_VOLUMEUP", 0xC00E9, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 116,	"KEY_POWER", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 117,	"KEY_KPEQUAL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 118,	"KEY_KPPLUSMINUS", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 119,	"KEY_PAUSE", 0x70048, 0x7F, 0x0, GDK_KEYCODE(GDK_KEY_Pause) },
	{ 120,	"KEY_SCALE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 121,	"KEY_KPCOMMA", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 122,	"KEY_HANGUEL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 123,	"KEY_HANJA", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 124,	"KEY_YEN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 125,	"KEY_LEFTMETA", 0x700E3, 0x71, 0xE05B, GDK_KEYCODE(GDK_KEY_Super_L) },
	{ 126,	"KEY_RIGHTMETA", 0x700E7, 0x71, 0xE05C, GDK_KEYCODE(GDK_KEY_Super_R) },
	{ 127,	"KEY_COMPOSE", 0x70065, 0x87, 0xE05D, GDK_KEYCODE(GDK_KEY_Menu) },
	{ 128,	"KEY_STOP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 129,	"KEY_AGAIN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 130,	"KEY_PROPS", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 131,	"KEY_UNDO", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 132,	"KEY_FRONT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 133,	"KEY_COPY", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 134,	"KEY_OPEN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 135,	"KEY_PASTE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 136,	"KEY_FIND", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 137,	"KEY_CUT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 138,	"KEY_HELP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 139,	"KEY_MENU", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 140,	"KEY_CALC", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 141,	"KEY_SETUP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 142,	"KEY_SLEEP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 143,	"KEY_WAKEUP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 144,	"KEY_FILE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 145,	"KEY_SENDFILE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 146,	"KEY_DELETEFILE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 147,	"KEY_XFER", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 148,	"KEY_PROG1", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 149,	"KEY_PROG2", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 150,	"KEY_WWW", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 151,	"KEY_MSDOS", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 152,	"KEY_COFFEE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 153,	"KEY_DIRECTION", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 154,	"KEY_CYCLEWINDOWS", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 155,	"KEY_MAIL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 156,	"KEY_BOOKMARKS", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 157,	"KEY_COMPUTER", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 158,	"KEY_BACK", 0xC00F2, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_Back) },
	{ 159,	"KEY_FORWARD", 0xC00F3, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_Forward) },
	{ 160,	"KEY_CLOSECD", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 161,	"KEY_EJECTCD", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 162,	"KEY_EJECTCLOSECD", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 163,	"KEY_NEXTSONG", 0xC00F1, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 164,	"KEY_PLAYPAUSE", 0xC00CD, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 165,	"KEY_PREVIOUSSONG", 0xC00F0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 166,	"KEY_STOPCD", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 167,	"KEY_RECORD", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 168,	"KEY_REWIND", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 169,	"KEY_PHONE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 170,	"KEY_ISO", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 171,	"KEY_CONFIG", 0xC0183, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 172,	"KEY_HOMEPAGE", 0xC0223, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_HomePage) },
	{ 173,	"KEY_REFRESH", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 174,	"KEY_EXIT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 175,	"KEY_MOVE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 176,	"KEY_EDIT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 177,	"KEY_SCROLLUP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 178,	"KEY_SCROLLDOWN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 179,	"KEY_KPLEFTPAREN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 180,	"KEY_KPRIGHTPAREN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 181,	"KEY_NEW", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 182,	"KEY_REDO", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 183,	"KEY_F13", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 184,	"KEY_F14", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 185,	"KEY_F15", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 186,	"KEY_F16", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 187,	"KEY_F17", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 188,	"KEY_F18", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 189,	"KEY_F19", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 190,	"KEY_F20", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 191,	"KEY_F21", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 192,	"KEY_F22", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 193,	"KEY_F23", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 194,	"KEY_F24", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 195 },
	{ 196 },
	{ 197 },
	{ 198 },
	{ 199 },
	{ 200,	"KEY_PLAYCD", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 201,	"KEY_PAUSECD", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 202,	"KEY_PROG3", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 203,	"KEY_PROG4", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 204,	"KEY_DASHBOARD", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 205,	"KEY_SUSPEND", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 206,	"KEY_CLOSE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 207,	"KEY_PLAY", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 208,	"KEY_FASTFORWARD", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 209,	"KEY_BASSBOOST", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 210,	"KEY_PRINT", 0x0, 0x0, 0x0, GDK_KEYCODE(GDK_KEY_Print) },
	{ 211,	"KEY_HP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 212,	"KEY_CAMERA", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 213,	"KEY_SOUND", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 214,	"KEY_QUESTION", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 215,	"KEY_EMAIL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 216,	"KEY_CHAT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 217,	"KEY_SEARCH", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 218,	"KEY_CONNECT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 219,	"KEY_FINANCE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 220,	"KEY_SPORT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 221,	"KEY_SHOP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 222,	"KEY_ALTERASE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 223,	"KEY_CANCEL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 224,	"KEY_BRIGHTNESSDOWN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 225,	"KEY_BRIGHTNESSUP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 226,	"KEY_MEDIA", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 227,	"KEY_SWITCHVIDEOMODE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 228,	"KEY_KBDILLUMTOGGLE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 229,	"KEY_KBDILLUMDOWN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 230,	"KEY_KBDILLUMUP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 231,	"KEY_SEND", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 232,	"KEY_REPLY", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 233,	"KEY_FORWARDMAIL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 234,	"KEY_SAVE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 235,	"KEY_DOCUMENTS", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 236,	"KEY_BATTERY", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 237,	"KEY_BLUETOOTH", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 238,	"KEY_WLAN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 239,	"KEY_UWB", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 240,	"KEY_UNKNOWN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 241,	"KEY_VIDEO_NEXT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 242,	"KEY_VIDEO_PREV", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 243,	"KEY_BRIGHTNESS_CYCLE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 244,	"KEY_BRIGHTNESS_ZERO", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 245,	"KEY_DISPLAY_OFF", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 246,	"KEY_WWAN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 247,	"KEY_RFKILL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 248,	"KEY_MICMUTE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
};

struct Item rels_and_abses[] = {
	{ 0,	"REL_X", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 0,	"ABS_X", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 1,	"REL_Y", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 1,	"ABS_Y", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 2,	"ABS_Z", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 2,	"REL_Z", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 3,	"ABS_RX", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 3,	"REL_RX", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 4,	"ABS_RY", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 4,	"REL_RY", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 5,	"ABS_RZ", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 5,	"REL_RZ", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 6,	"REL_HWHEEL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 6,	"ABS_THROTTLE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 7,	"REL_DIAL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 7,	"ABS_RUDDER", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 8,	"REL_WHEEL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 8,	"ABS_WHEEL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 9,	"ABS_GAS", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 9,	"REL_MISC", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 10,	"ABS_BRAKE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 15,	"REL_MAX", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 16,	"ABS_HAT0X", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 16,	"REL_CNT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 17,	"ABS_HAT0Y", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 18,	"ABS_HAT1X", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 19,	"ABS_HAT1Y", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 20,	"ABS_HAT2X", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 21,	"ABS_HAT2Y", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 22,	"ABS_HAT3X", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 23,	"ABS_HAT3Y", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 24,	"ABS_PRESSURE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 25,	"ABS_DISTANCE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 26,	"ABS_TILT_X", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 27,	"ABS_TILT_Y", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 28,	"ABS_TOOL_WIDTH", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 32,	"ABS_VOLUME", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 40,	"ABS_MISC", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 47,	"ABS_MT_SLOT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 48,	"ABS_MT_TOUCH_MAJOR", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 49,	"ABS_MT_TOUCH_MINOR", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 50,	"ABS_MT_WIDTH_MAJOR", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 51,	"ABS_MT_WIDTH_MINOR", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 52,	"ABS_MT_ORIENTATION", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 53,	"ABS_MT_POSITION_X", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 54,	"ABS_MT_POSITION_Y", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 55,	"ABS_MT_TOOL_TYPE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 56,	"ABS_MT_BLOB_ID", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 57,	"ABS_MT_TRACKING_ID", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 58,	"ABS_MT_PRESSURE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 59,	"ABS_MT_DISTANCE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 60,	"ABS_MT_TOOL_X", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 61,	"ABS_MT_TOOL_Y", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 63,	"ABS_MAX", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 64,	"ABS_CNT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 65,	"YAW", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 66,	"ROLL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 256,	"BTN_MISC", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 256,	"BTN_0", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 257,	"BTN_1", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 258,	"BTN_2", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 259,	"BTN_3", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 260,	"BTN_4", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 261,	"BTN_5", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 262,	"BTN_6", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 263,	"BTN_7", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 264,	"BTN_8", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 265,	"BTN_9", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 272,	"BTN_LEFT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 272,	"BTN_MOUSE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 273,	"BTN_RIGHT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 274,	"BTN_MIDDLE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 275,	"BTN_SIDE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 276,	"BTN_EXTRA", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 277,	"BTN_FORWARD", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 278,	"BTN_BACK", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 279,	"BTN_TASK", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 288,	"BTN_JOYSTICK", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 288,	"BTN_TRIGGER", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 289,	"BTN_THUMB", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 290,	"BTN_THUMB2", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 291,	"BTN_TOP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 292,	"BTN_TOP2", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 293,	"BTN_PINKIE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 294,	"BTN_BASE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 295,	"BTN_BASE2", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 296,	"BTN_BASE3", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 297,	"BTN_BASE4", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 298,	"BTN_BASE5", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 299,	"BTN_BASE6", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 303,	"BTN_DEAD", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 304,	"BTN_GAMEPAD", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 304,	"BTN_A", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 304,	"BTN_SOUTH", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 305,	"BTN_EAST", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 305,	"BTN_B", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 306,	"BTN_C", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 307,	"BTN_X", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 307,	"BTN_NORTH", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 308,	"BTN_Y", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 308,	"BTN_WEST", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 309,	"BTN_Z", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 310,	"BTN_TL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 311,	"BTN_TR", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 312,	"BTN_TL2", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 313,	"BTN_TR2", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 314,	"BTN_SELECT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 315,	"BTN_START", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 316,	"BTN_MODE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 317,	"BTN_THUMBL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 318,	"BTN_THUMBR", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 320,	"BTN_TOOL_PEN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 320,	"BTN_DIGI", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 321,	"BTN_TOOL_RUBBER", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 322,	"BTN_TOOL_BRUSH", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 323,	"BTN_TOOL_PENCIL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 324,	"BTN_TOOL_AIRBRUSH", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 325,	"BTN_TOOL_FINGER", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 326,	"BTN_TOOL_MOUSE", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 327,	"BTN_TOOL_LENS", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 328,	"BTN_TOOL_QUINTTAP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 329,	"BTN_STYLUS3", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 330,	"BTN_TOUCH", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 331,	"BTN_STYLUS", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 332,	"BTN_STYLUS2", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 333,	"BTN_TOOL_DOUBLETAP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 334,	"BTN_TOOL_TRIPLETAP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 335,	"BTN_TOOL_QUADTAP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 336,	"BTN_WHEEL", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 336,	"BTN_GEAR_DOWN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 337,	"BTN_GEAR_UP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 544,	"BTN_DPAD_UP", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 545,	"BTN_DPAD_DOWN", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 546,	"BTN_DPAD_LEFT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 547,	"BTN_DPAD_RIGHT", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 704,	"BTN_TRIGGER_HAPPY1", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 704,	"BTN_TRIGGER_HAPPY", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 705,	"BTN_TRIGGER_HAPPY2", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 706,	"BTN_TRIGGER_HAPPY3", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 707,	"BTN_TRIGGER_HAPPY4", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 708,	"BTN_TRIGGER_HAPPY5", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 709,	"BTN_TRIGGER_HAPPY6", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 710,	"BTN_TRIGGER_HAPPY7", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 711,	"BTN_TRIGGER_HAPPY8", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 712,	"BTN_TRIGGER_HAPPY9", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 713,	"BTN_TRIGGER_HAPPY10", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 714,	"BTN_TRIGGER_HAPPY11", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 715,	"BTN_TRIGGER_HAPPY12", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 716,	"BTN_TRIGGER_HAPPY13", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 717,	"BTN_TRIGGER_HAPPY14", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 718,	"BTN_TRIGGER_HAPPY15", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 719,	"BTN_TRIGGER_HAPPY16", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 720,	"BTN_TRIGGER_HAPPY17", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 721,	"BTN_TRIGGER_HAPPY18", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 722,	"BTN_TRIGGER_HAPPY19", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 723,	"BTN_TRIGGER_HAPPY20", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 724,	"BTN_TRIGGER_HAPPY21", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 725,	"BTN_TRIGGER_HAPPY22", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 726,	"BTN_TRIGGER_HAPPY23", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 727,	"BTN_TRIGGER_HAPPY24", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 728,	"BTN_TRIGGER_HAPPY25", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 729,	"BTN_TRIGGER_HAPPY26", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 730,	"BTN_TRIGGER_HAPPY27", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 731,	"BTN_TRIGGER_HAPPY28", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 732,	"BTN_TRIGGER_HAPPY29", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 733,	"BTN_TRIGGER_HAPPY30", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 734,	"BTN_TRIGGER_HAPPY31", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 735,	"BTN_TRIGGER_HAPPY32", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 736,	"BTN_TRIGGER_HAPPY33", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 737,	"BTN_TRIGGER_HAPPY34", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 738,	"BTN_TRIGGER_HAPPY35", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 739,	"BTN_TRIGGER_HAPPY36", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 740,	"BTN_TRIGGER_HAPPY37", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 741,	"BTN_TRIGGER_HAPPY38", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 742,	"BTN_TRIGGER_HAPPY39", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
	{ 743,	"BTN_TRIGGER_HAPPY40", 0x0, 0x0, 0x0, GDK_KEYCODE(0) },
};