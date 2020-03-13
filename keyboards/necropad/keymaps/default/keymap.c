#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LAYER 0
 * ,-----------------------.
 * |   1   |   2   |   3   |
 * |-------+-------+-------|
 * |   4   | 5/ENT |   6   | Dbl Tap 5 for Enter
 * |-------+-------+-------|
 * |  7/0  |   8   | 9/FN  | 7/0 = Dbl Tap 7 for 0  -  9/FN = Hold 9 for FN
 * `-----------------------'
 */
[0] = LAYOUT( \
  KC_LEFT,  KC_F10,   KC_PAST,    KC_PMNS, \
  KC_P7,    KC_P8,    KC_P9,      KC_PPLS,       \
  KC_P4,    KC_P5,    KC_P6,       \
  KC_P1,    KC_P2,    KC_P3,      KC_PENT, \
  KC_P0,    KC_PDOT \
),

};

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder */
    if (clockwise) {
      tap_code(KC_VOLD);
    } else {
      tap_code(KC_VOLU);
    }
  }
}
