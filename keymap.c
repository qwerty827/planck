#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = { /* Qwerty */
  {KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_BSPC},
  {KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT},
  {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENTER},
  {KC_LCTL, BACKLIT, KC_LGUI, KC_LALT, FUNC(2),    KC_SPC,   KC_SPC,    FUNC(1),   KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
                                                // Space is repeated to accommadate for both spacebar wiring positions
},
[1] = { /* RAISE */
  {KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS},
  {KC_TRNS, KC_VOLU,  KC_MUTE,  KC_VOLD, KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_LBRC,  KC_RBRC,  KC_SCLN, KC_TRNS},
  {KC_LSFT, KC_MPRV,  KC_MPLY,  KC_MNXT, KC_F9,  KC_F10, KC_F11, KC_F12, KC_BSLS,  KC_NUHS,  KC_TRNS, KC_ENTER},
  {KC_TRNS, BACKLIT, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, FUNC(1), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
},
[2] = { /* LOWER */
  {KC_TRNS, KC_TRNS, KC_UP,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_1,   KC_2,    KC_3,  KC_DEL},
  {KC_CAPS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_4,   KC_5,    KC_6,  KC_DOT},
  {KC_LSFT, KC_HOME, KC_PGUP, KC_PGDOWN, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_7,   KC_8,   KC_9,   KC_EQL},
  {KC_TRNS, BACKLIT, KC_TRNS, KC_TRNS, FUNC(2),   KC_TRNS,   KC_TRNS, KC_TRNS, KC_0, KC_DOT, KC_BSLS, KC_ENTER}
},
[3] = { /* Qwerty */
  {KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_BSPC},
  {KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT},
  {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENTER},
  {KC_LCTL, BACKLIT, KC_LGUI, KC_LALT, FUNC(2),    KC_SPC,   KC_SPC,    FUNC(1),   KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
                                                // Space is repeated to accommadate for both spacebar wiring positions
}
};


const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(1),  // to RAISE
    [2] = ACTION_LAYER_MOMENTARY(2),   // to LOWER
    [3] = ACTION_LAYER_MOMENTARY(3)   // to LOWER
};
