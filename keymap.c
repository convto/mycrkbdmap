#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_GRV, KC_Y, KC_C, KC_L, KC_F, KC_K, KC_J, KC_U, KC_O, KC_P, KC_Q, KC_BSLS, KC_TAB, KC_R, LALT_T(KC_S), LT(1,KC_T), LCTL_T(KC_H), KC_M, KC_SCLN, RCTL_T(KC_A), LT(1,KC_E), RALT_T(KC_N), KC_I, KC_QUOTE, KC_MINUS, KC_W, KC_V, KC_G, KC_D, KC_B, KC_X, KC_SLSH, KC_COMM, KC_DOT, KC_Z, KC_EQUAL, LGUI_T(KC_LANG2), LSFT_T(KC_SPC), KC_BSPC, KC_ESC, RSFT_T(KC_ENT), RGUI_T(KC_LANG1)),
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
  //        `,       Y,       C,       L,       F,       K,                            J,       U,       O,       P,      Q,        \,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  //      TAB,       R,   ALT/S,LAYER1/T,  CTRL/H,       M,                            ;,  CTRL/A,LAYER1/E,   ALT/N,    KC_I,       ',\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  //        -,       W,       V,       G,       D,       B,                            X,       /,       ,,       .,       Z,       =,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                      // GUI/LANG, SFT/SPC,    BSPC,        ENT, SFT/ENT,GUI/LANG \
                                      //`--------------------------'  `--------------------------'

  ),
	[1] = LAYOUT(KC_GRV, KC_7, KC_8, KC_9, KC_0, KC_K, KC_J, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSLS, KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_M, KC_SCLN, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_QUOTE, KC_MINUS, KC_5, KC_LBRC, KC_RBRC, KC_6, KC_B, KC_X, KC_PERC, KC_LCBR, KC_RCBR, KC_CIRC, KC_EQUAL, LGUI_T(KC_LANG2), LSFT_T(KC_SPC), KC_BSPC, KC_ESC, RSFT_T(KC_ENT), RGUI_T(KC_LANG1))
};
