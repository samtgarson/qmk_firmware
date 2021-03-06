#include "sam.h"

#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP( /* Base */
  KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPACE, \
  KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRACKET, KC_RBRACKET, KC_ENTER, KC__VOLUP, \
  KC_CAPSLOCK, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_QUOTE, KC_BSLASH, KC__VOLDOWN, \
  KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSHIFT, KC_UP, KC__MUTE, \
  MO(1), KC_LCTRL, KC_LALT, KC_LGUI, KC_SPACE, KC_RGUI, KC_RALT, KC_RCTRL, MO(1), KC_LEFT, KC_DOWN, KC_RIGHT \
),
[1] = KEYMAP( /* Raise */
  KC_SLEP, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL, \
  ______,  ______, ______, ______, ______, ______, ______, ______, ______, ______,  ______,  ______,  ______,  ______,  KC_MNXT, \
  ______,  ______, ______, ______, ______, ______, ______, ______, ______, ______,  ______,  ______,  ______, KC_MPLY, \
  ______,  KC_GRV, ______, ______, ______, ______, ______, ______, ______, ______,  ______,  ______, KC_PGUP, KC_MPRV, \
  ______,  ______, ______, ______, ______, ______, ______, ______, ______, KC_HOME, KC_PGDN, KC_END \
),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
