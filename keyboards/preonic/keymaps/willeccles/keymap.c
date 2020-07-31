#include "preonic.h"
#include "action_layer.h"

enum preonic_layers {
	_QWERTY,
	_COLEMAK,
	_DVORAK,
	_LOWER,
	_RAISE,
	_ADJUST,
	_EXTRAS
};

enum preonic_keycodes {
	QWERTY = SAFE_RANGE,
	COLEMAK,
	DVORAK,
	LOWER,
	RAISE,
	BACKLIT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/* Qwerty
	 * ,-----------------------------------------------------------------------------------.
	 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Ctrl | Extr | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
	 * `-----------------------------------------------------------------------------------'
	 */
	[_QWERTY] = {
  		{KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC},
 		{KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL},
  		{KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT},
  		{KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT },
  		{KC_LCTL, MO(_EXTRAS), KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
	},
	
	/* Colemak
	 * ,-----------------------------------------------------------------------------------.
	 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Tab  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ;  | Del  |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | Esc  |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |  "   |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * | Shift|   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   /  |Enter |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Ctrl | Extra| Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
	 * `-----------------------------------------------------------------------------------'
	 */
	[_COLEMAK] = {
	  	{KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC},
	  	{KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_DEL},
	  	{KC_ESC,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT},
	  	{KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT },
  	  	{KC_LCTL, MO(_EXTRAS), KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
	},

	/* Dvorak
	 * ,-----------------------------------------------------------------------------------.
	 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Tab  |   "  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Del  |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | Esc  |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  /   |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * | Shift|   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |Enter |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Ctrl | Extra| Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
	 * `-----------------------------------------------------------------------------------'
	 
	[_DVORAK] = {
	  {KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC},
	  {KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_DEL},
	  {KC_ESC,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH},
	  {KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_ENT },
  	  {KC_LCTL, MO(_EXTRAS), KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
	},*/

	/* Lower
	 * ,-----------------------------------------------------------------------------------.
	 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | PSCR |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | CAPS |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * | LOCK |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |      |      |      |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      | RAlt |      |      |      |             |      | Home | PgDn | PgUp | End  |
	 * `-----------------------------------------------------------------------------------'
	 */
	[_LOWER] = {
  		{KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12},
  		{KC_PSCR, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL},
  		{KC_CAPS,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE},
  		{_______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, _______, _______, _______, _______, _______},
  		{_______, KC_RALT, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END}
	},
	
	/* Raise
	 * ,-----------------------------------------------------------------------------------.
	 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | PSCR | LMB  | M UP | RMB  |      |      |      |      |      |      |      | del  |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | Del  | M L  | M DN | M R  |      |      |      |   -  |   =  |   [  |   ]  |  \   |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |      | MMB  |      |      |      |      |      | Play | Play | Play | Play |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      | RAlt |      |      |      |             |      | Prev | Vol- | Vol+ | Next |
	 * `-----------------------------------------------------------------------------------'
	 */
	[_RAISE] = {
  		{KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12},
  		{KC_PSCR, KC_MS_BTN1, KC_MS_U, KC_MS_BTN2, _______, _______, _______, _______, _______, _______, _______,    KC_DEL},
  		{KC_DEL, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS},
  		{_______, _______, KC_MS_BTN3, _______, _______, _______, _______, _______, KC_MPLY, KC_MPLY, KC_MPLY, KC_MPLY},
  		{_______, KC_RALT, _______, _______, _______, _______, _______, _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT}
	},
	
	/* Adjust (Lower + Raise)
	 * ,-----------------------------------------------------------------------------------.
	 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      | Reset|      |      |      |      |      |      |      |      |      |  Del |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * |      |      |      |Aud on|AudOff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|      |      |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |Voice-|Voice+|Mus on|MusOff|MidiOn|MidOff|      |      |      |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |      |             |      |      | MSA0 | MSA1 | MSA2 |
	 * `-----------------------------------------------------------------------------------'
	 */
	[_ADJUST] = {
 		{KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12},
  		{_______, RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL},
  		{_______, _______, MU_MOD, AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  COLEMAK, DVORAK,  _______, _______},
  		{_______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  _______, _______, _______, _______, _______},
  		{_______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MS_ACCEL0, KC_MS_ACCEL1, KC_MS_ACCEL2}
	},

	/* Extras (where i keep fun stuff like vim arrow keys, music....)
	 * ,-----------------------------------------------------------------------------------.
	 * |      |      |      |      |      |      |      |      |      |      |      | Bksp |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Tab  | LMB  | MUP  | RMB  |      |      | HOME | PGDN | PGUP | END  |      | Del  |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | Esc  | ML   | MDN  |  MR  | MMB  |      | LEFT | DOWN |  UP  |RIGHT |      |      |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * | Shift|RSHFT | RCTL |      |      |      |      |      |      |      |      |Enter |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Ctrl | TRNS | Alt  | GUI  | Lock |    Space    |      | ScrL | ScrD | ScrU | ScrR |
	 * `-----------------------------------------------------------------------------------'*/
	 
	[_EXTRAS] = {
  		{_______, _______,  _______,  _______,   _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_BSPC},
  		{KC_TAB,  KC_MS_BTN1,    KC_MS_U,    KC_MS_BTN2,    _______,    _______,    KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,    _______,    KC_DEL},
  		{KC_TRNS,  KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_MS_BTN3,    _______,    KC_LEFT,    KC_DOWN,    KC_UP,    KC_RIGHT,    _______, _______},
  		{KC_LSFT,  KC_RSHIFT,    KC_RCTL,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   KC_ENT },
  		{KC_LCTL, KC_TRNS, KC_LALT, KC_LGUI, KC_LOCK,   KC_SPC,  KC_SPC,  _______,   KC_WH_L, KC_WH_D, KC_WH_U,   KC_WH_R}
	}

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case QWERTY:
			if (record->event.pressed) {
				set_single_persistent_default_layer(_QWERTY);
			}
			return false;
			break;
		case COLEMAK:
			if (record->event.pressed) {
				set_single_persistent_default_layer(_COLEMAK);
			}
			return false;
			break;
		/*case DVORAK:
			if (record->event.pressed) {
				set_single_persistent_default_layer(_DVORAK);
			}
			return false;
			break;*/
		case LOWER:
			if (record->event.pressed) {
				layer_on(_LOWER);
				update_tri_layer(_LOWER, _RAISE, _ADJUST);
			} else {
				layer_off(_LOWER);
				update_tri_layer(_LOWER, _RAISE, _ADJUST);
			}
			return false;
			break;
		case RAISE:
			if (record->event.pressed) {
				layer_on(_RAISE);
				update_tri_layer(_LOWER, _RAISE, _ADJUST);
			} else {
				layer_off(_RAISE);
				update_tri_layer(_LOWER, _RAISE, _ADJUST);
			}
			return false;
			break;
		case BACKLIT:
			if (record->event.pressed) {
				register_code(KC_RSFT);
#ifdef BACKLIGHT_ENABLE
				backlight_step();
#endif
				PORTE &= ~(1<<6);
			} else {
				unregister_code(KC_RSFT);
				PORTE |= (1<<6);
			}
			return false;
			break;
	}
	return true;
};
