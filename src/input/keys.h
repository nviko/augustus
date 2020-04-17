#ifndef INPUT_KEYS_H
#define INPUT_KEYS_H

#include <stdint.h>

typedef enum {
    KEY_NONE = 0,
    KEY_A,
    KEY_B,
    KEY_C,
    KEY_D,
    KEY_E,
    KEY_F,
    KEY_G,
    KEY_H,
    KEY_I,
    KEY_J,
    KEY_K,
    KEY_L,
    KEY_M,
    KEY_N,
    KEY_O,
    KEY_P,
    KEY_Q,
    KEY_R,
    KEY_S,
    KEY_T,
    KEY_U,
    KEY_V,
    KEY_W,
    KEY_X,
    KEY_Y,
    KEY_Z,
    KEY_1,
    KEY_2,
    KEY_3,
    KEY_4,
    KEY_5,
    KEY_6,
    KEY_7,
    KEY_8,
    KEY_9,
    KEY_0,
    KEY_MINUS,
    KEY_EQUALS,
    KEY_ENTER,
    KEY_ESCAPE,
    KEY_BACKSPACE,
    KEY_TAB,
    KEY_SPACE,
    KEY_LEFTBRACKET,
    KEY_RIGHTBRACKET,
    KEY_BACKSLASH,
    KEY_SEMICOLON,
    KEY_APOSTROPHE,
    KEY_GRAVE,
    KEY_COMMA,
    KEY_PERIOD,
    KEY_SLASH,
    KEY_F1,
    KEY_F2,
    KEY_F3,
    KEY_F4,
    KEY_F5,
    KEY_F6,
    KEY_F7,
    KEY_F8,
    KEY_F9,
    KEY_F10,
    KEY_F11,
    KEY_F12,
    KEY_INSERT,
    KEY_DELETE,
    KEY_HOME,
    KEY_END,
    KEY_PAGEUP,
    KEY_PAGEDOWN,
    // arrow keys
    KEY_RIGHT,
    KEY_LEFT,
    KEY_DOWN,
    KEY_UP,
    KEY_MAX_ITEMS
} key_type;

typedef enum {
    KEY_MOD_NONE = 0,
    KEY_MOD_SHIFT = 1,
    KEY_MOD_CTRL = 2,
    KEY_MOD_ALT = 4,
    KEY_MOD_GUI = 8,
} key_modifier_type;

const char *key_combination_name(key_type key, key_modifier_type modifiers);

int key_combination_from_name(const char *name, key_type *key, key_modifier_type *modifiers);

const uint8_t *key_combination_display_name(key_type key, key_modifier_type modifiers);

#endif // INPUT_KEYS_H
