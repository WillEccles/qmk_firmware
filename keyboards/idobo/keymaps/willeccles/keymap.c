#include QMK_KEYBOARD_H

enum layerlabels {
    LAYOUT_SPLIT   = 0,
    LAYOUT_NOSPLIT = 4,
};

enum layernames {
    SPLIT = SAFE_RANGE,
    NOSPLIT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* This layout is split because it's comfy */
    [LAYOUT_SPLIT] = LAYOUT_ortho_5x15(
            KC_GRV,   KC_1,   KC_2,     KC_3,     KC_4,   KC_5,    KC_MINS,  LWIN(KC_L),  KC_EQL,   KC_6,    KC_7,   KC_8,     KC_9,     KC_0,     KC_BSPC,
            KC_TAB,   KC_Q,   KC_W,     KC_E,     KC_R,   KC_T,    KC_P7,    KC_P8,       KC_P9,    KC_Y,    KC_U,   KC_I,     KC_O,     KC_P,     KC_DEL,
            KC_ESC,   KC_A,   KC_S,     KC_D,     KC_F,   KC_G,    KC_P4,    KC_P5,       KC_P6,    KC_H,    KC_J,   KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
            KC_LSFT,  KC_Z,   KC_X,     KC_C,     KC_V,   KC_B,    KC_P1,    KC_P2,       KC_P3,    KC_N,    KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT,
            KC_LCTL,  MO(3),  KC_LGUI,  KC_LALT,  MO(1),  KC_SPC,  KC_BSPC,  KC_P0,       KC_PENT,  KC_SPC,  MO(2),  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT
            ),
    [1] = LAYOUT_ortho_5x15(
            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    _______,  _______,  _______,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
            KC_PSCR,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
            KC_CAPS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    _______,  _______,  _______,  KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE,
            _______,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END
            ),
    [2] = LAYOUT_ortho_5x15(
            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    _______,  _______,  _______,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
            _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    _______,  _______,  _______,  KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,
            _______,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  _______,  _______,  KC_MPLY,  KC_MPLY,  KC_MPLY,  KC_MPLY,
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT
            ),
    [3] = LAYOUT_ortho_5x15(
            KC_NO,  SPLIT,    NOSPLIT,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_NO,
            KC_NO,  RESET,    DEBUG,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,     RGB_SPD,  RGB_SPI,  KC_NO,
            KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,     RGB_HUD,  RGB_HUI,  KC_NO,
            KC_NO,  KC_RSFT,  KC_RCTL,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,     RGB_SAD,  RGB_SAI,  KC_NO,
            KC_NO,  _______,  AG_NORM,  AG_SWAP,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  RGB_TOG,  RGB_RMOD,  RGB_VAD,  RGB_VAI,  RGB_MOD
            ),

    /* This layout is without a split, just in case I want to use that */
    [LAYOUT_NOSPLIT] = LAYOUT_ortho_5x15(
            KC_GRV,   KC_1,   KC_2,     KC_3,     KC_4,   KC_5,     KC_6,    KC_7,          KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_BSPC,
            KC_TAB,   KC_Q,   KC_W,     KC_E,     KC_R,   KC_T,     KC_Y,    KC_U,          KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,
            KC_ESC,   KC_A,   KC_S,     KC_D,     KC_F,   KC_G,     KC_H,    KC_J,          KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_F13,   KC_F14,   KC_F15,
            KC_LSFT,  KC_Z,   KC_X,     KC_C,     KC_V,   KC_B,     KC_N,    KC_M,          KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT,   KC_F16,   KC_F17,   KC_F18,
            KC_LCTL,  MO(7),  KC_LGUI,  KC_LALT,  MO(5),  KC_BSPC,  KC_SPC,  LT(6,KC_ENT),  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_F19,   KC_F20,   KC_F21
            ),
    [5] = LAYOUT_ortho_5x15(
            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  _______,
            KC_PSCR,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
            KC_CAPS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE,  _______,  _______,  _______,
            _______,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   _______,  _______,  _______
            ),
    [6] = LAYOUT_ortho_5x15(
            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  _______,
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
            _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,  _______,  _______,  _______,
            _______,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  KC_MPLY,  KC_MPLY,  KC_MPLY,  KC_MPLY,  _______,  _______,  _______,
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT,  _______,  _______,  _______
            ),
    [7] = LAYOUT_ortho_5x15(
            KC_NO,  SPLIT,    NOSPLIT,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,
            KC_NO,  RESET,    DEBUG,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,     RGB_SPD,  RGB_SPI,  KC_NO,    KC_NO,  KC_NO,  KC_NO,
            KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,     RGB_HUD,  RGB_HUI,  KC_NO,    KC_NO,  KC_NO,  KC_NO,
            KC_NO,  KC_RSFT,  KC_RCTL,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,     RGB_SAD,  RGB_SAI,  KC_NO,    KC_NO,  KC_NO,  KC_NO,
            KC_NO,  _______,  AG_NORM,  AG_SWAP,  KC_NO,  KC_NO,  KC_NO,  RGB_TOG,  RGB_RMOD,  RGB_VAD,  RGB_VAI,  RGB_MOD,  KC_NO,  KC_NO,  KC_NO
            ),
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch(keycode) {
        case NOSPLIT:
            if (record->event.pressed) {
                set_single_persistent_default_layer(LAYOUT_NOSPLIT);
            }
            return false;
            break;
        case SPLIT:
            if (record->event.pressed) {
                set_single_persistent_default_layer(LAYOUT_SPLIT);
            }
            return false;
            break;
    }
    return true;
}
