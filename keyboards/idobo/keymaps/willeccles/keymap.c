#include QMK_KEYBOARD_H

enum layerlabels {
    LAYOUT_QWERTY  = 0,
    LAYOUT_COLEMAK = 1,
};

enum layernames {
    QWERTY = SAFE_RANGE,
    COLEMAK,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYOUT_QWERTY] = LAYOUT_ortho_5x15(
            KC_GRV,   KC_1,   KC_2,     KC_3,     KC_4,   KC_5,    KC_MINS,  LWIN(KC_L),  KC_EQL,   KC_6,    KC_7,   KC_8,     KC_9,     KC_0,     KC_BSPC,
            KC_TAB,   KC_Q,   KC_W,     KC_E,     KC_R,   KC_T,    KC_P7,    KC_P8,       KC_P9,    KC_Y,    KC_U,   KC_I,     KC_O,     KC_P,     KC_DEL,
            KC_ESC,   KC_A,   KC_S,     KC_D,     KC_F,   KC_G,    KC_P4,    KC_P5,       KC_P6,    KC_H,    KC_J,   KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
            KC_LSFT,  KC_Z,   KC_X,     KC_C,     KC_V,   KC_B,    KC_P1,    KC_P2,       KC_P3,    KC_N,    KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT,
            KC_LCTL,  MO(4),  KC_LGUI,  KC_LALT,  MO(2),  KC_SPC,  KC_BSPC,  KC_P0,       KC_PENT,  KC_SPC,  MO(3),  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT
            ),
    [LAYOUT_COLEMAK] = LAYOUT_ortho_5x15(
            KC_GRV,   KC_1,   KC_2,     KC_3,     KC_4,   KC_5,    KC_MINS,  LWIN(KC_L),  KC_EQL,   KC_6,    KC_7,   KC_8,     KC_9,     KC_0,     KC_BSPC,
            KC_TAB,   KC_Q,   KC_W,     KC_F,     KC_P,   KC_G,    KC_P7,    KC_P8,       KC_P9,    KC_J,    KC_L,   KC_U,     KC_Y,     KC_SCLN,  KC_DEL,
            KC_ESC,   KC_A,   KC_R,     KC_S,     KC_T,   KC_D,    KC_P4,    KC_P5,       KC_P6,    KC_H,    KC_N,   KC_E,     KC_I,     KC_O,     KC_QUOT,
            KC_LSFT,  KC_Z,   KC_X,     KC_C,     KC_V,   KC_B,    KC_P1,    KC_P2,       KC_P3,    KC_K,    KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT,
            KC_LCTL,  MO(4),  KC_LGUI,  KC_LALT,  MO(2),  KC_SPC,  KC_BSPC,  KC_P0,       KC_PENT,  KC_SPC,  MO(3),  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT
            ),
    [2] = LAYOUT_ortho_5x15(
            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    _______,  _______,  _______,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
            KC_PSCR,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
            KC_CAPS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    _______,  _______,  _______,  KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE,
            _______,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END
            ),
    [3] = LAYOUT_ortho_5x15(
            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    _______,  _______,  _______,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
            _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    _______,  _______,  _______,  KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,
            _______,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  _______,  _______,  KC_MPLY,  KC_MPLY,  KC_MPLY,  KC_MPLY,
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT
            ),
    [4] = LAYOUT_ortho_5x15(
            KC_NO,  QWERTY,   COLEMAK,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_NO,
            KC_NO,  RESET,    DEBUG,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,     RGB_SPD,  RGB_SPI,  KC_NO,
            KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,     RGB_HUD,  RGB_HUI,  KC_NO,
            KC_NO,  KC_RSFT,  KC_RCTL,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,     RGB_SAD,  RGB_SAI,  KC_NO,
            KC_NO,  _______,  AG_NORM,  AG_SWAP,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  RGB_TOG,  RGB_RMOD,  RGB_VAD,  RGB_VAI,  RGB_MOD
            ),
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch(keycode) {
        case QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(LAYOUT_QWERTY);
            }
            return false;
            break;
        case COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(LAYOUT_COLEMAK);
            }
            return false;
            break;
    }
    return true;
}
