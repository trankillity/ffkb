#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _NUMB,
    _NAVI,
    _MOUS,
    _COMB
};

enum custom_keycodes {
    C_DBLC = SAFE_RANGE,
    C_MLTG,
    // C_SCRL,
    // C_ZOOM,
    C_CAPW,
    C_SNKC,
    C_KEBC,
    C_XCSE
};

#include "config.h"
#include "g/keymap_combo.h"
#include "casemodes.h"

#define COMBO_ONLY_FROM_LAYER _COMB

#define C_SELA      C(KC_A)
#define C_UNDO      C(KC_Z)
#define C_CUT       C(KC_X)
#define C_COPY      C(KC_C)
#define C_PAST      C(KC_V)
#define C_REDO      C(KC_Y)

#define C_TABI      KC_TAB
#define C_TABD      S(KC_TAB)
#define C_STBI      FP_SUPER_TAB
#define C_STBD      S(FP_SUPER_TAB)
#define C_DSKT      G(KC_TAB)
#define C_ACCL      FP_ACCEL_TOG
#define C_CENT      C(KC_ENTER)
#define C_SCRL      LT(0,KC_S)
#define C_ZOOM      LT(0,KC_Z)
#define C_MTOG      TG(_MOUS)

// Data Grip Shortcuts
#define D_FMTC      C(A(KC_L))
#define D_EXPS      C(KC_W)
#define D_COLS      A(S(KC_INS))
#define D_NEWF      A(KC_INS)

#define OSM_SFT     OSM(MOD_LSFT)
#define OSM_CTL     OSM(MOD_LCTL)
#define OSM_ALT     OSM(MOD_LALT)
#define OSM_GUI     OSM(MOD_LGUI)
#define OSL_NUM     OSL(_NUMB)
#define OSL_NAV     OSL(_NAVI)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Base - Colemak
 *
 * ,-----------------------------------------.            ,-----------------------------------------.
 * |      |   Q  |   W  |   F  |   P  |   B  |            |   J  |   L  |   U  |   Y  |   '  |      |
 * |------+------+------+------+------+------|            |------+------+------+------+------+------|
 * |      |   A  |   R  |   S  |   T  |   G  |            |   M  |   N  |   E  |   I  |   O  |      |
 * |------+------+------+------+------+------|            |------+------+------+------+------+------|
 * |      |   Z  |   X  |   C  |   D  |   V  |            |   K  |   H  |   ,  |   .  |   /  |      |
 * `-----------------------------------------'            `-----------------------------------------'
 *                          ,--------------------.    ,--------------------.
 *                          |      |      |      |    |      |      |      |
 *                          `--------------------'    `--------------------.
 */

[_BASE] = LAYOUT_ffkb(
    KC_ESC,     KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,               KC_J,       KC_L,       KC_U,       KC_Y,       KC_QUOT,    KC_BSLS,
    C_TABI,     KC_A,       KC_R,       KC_S,       KC_T,       KC_G,               KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       C_TABD,
    OSM_CTL,    KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,               KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    C_CENT,
                            KC_NO,      OSL_NUM,    OSM_SFT,    KC_BSPC,            KC_ENTER,   KC_SPC,     OSL_NAV,    KC_NO
),

[_NUMB] = LAYOUT_ffkb(
    KC_F6,      KC_F5,      KC_F4,      KC_F3,      KC_F2,      KC_F1,              KC_EQL,     KC_7,       KC_8,       KC_9,       KC_DOT,     KC_COMM,
    C_TABI,     OSM_GUI,    OSM_ALT,    OSM_CTL,    OSM_SFT,    _______,            KC_PPLS,    KC_4,       KC_5,       KC_6,       KC_PAST,    KC_GRV,
    KC_F12,     KC_F11,     KC_F10,     KC_F9,      KC_F8,      KC_F7,              KC_MINS,    KC_1,       KC_2,       KC_3,       KC_SLSH,    KC_UNDS,
                            _______,    _______,    _______,    _______,            _______,    _______,    KC_0,       _______
),

[_NAVI] = LAYOUT_ffkb(
    KC_NO,      KC_INS,     KC_HOME,    KC_UP,      KC_END,     KC_PGUP,            KC_ESC,     C_STBI,     C_STBD,     C_DSKT,     _______,    _______,
    C_TABI,     C_SELA,     KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_PGDN,            KC_VOLU,    OSM_SFT,    OSM_CTL,    OSM_ALT,    OSM_GUI,    C_TABD,
    KC_NO,      C_UNDO,     C_CUT,      C_COPY,     C_PAST,     C_REDO,             KC_VOLD,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_MSTP,    KC_MUTE,
                            _______,    _______,    _______,    KC_DEL,             _______,    _______,    _______,    _______
),

[_MOUS] = LAYOUT_ffkb(
    C_SCRL,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,             C_MTOG,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     C_ACCL,
    C_ZOOM,     C_MLTG,     KC_BTN3,    KC_BTN2,    KC_BTN1,    C_DBLC,             C_MTOG,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     C_ACCL,
    OSM_CTL,    C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,             C_MTOG,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     C_ACCL,
                            _______,    C_MLTG,     _______,    C_MLTG,             C_MLTG,     C_MLTG,     C_MLTG,     _______
),

// Combo layer. Never to be activated, just used or combo indexing purposes.
[_COMB] = LAYOUT_ffkb(
    KC_1,       KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,               KC_J,       KC_L,       KC_U,       KC_Y,       KC_QUOT,    KC_4,
    KC_2,       KC_A,       KC_R,       KC_S,       KC_T,       KC_G,               KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       KC_5,
    KC_3,       KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,               KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_6,
                            _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______
),

// [BLANK] = LAYOUT_ffkb(
//     _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
//     _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
//     _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
//                             _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______
// ),

};

bool is_mouse_record_user(uint16_t keycode, keyrecord_t* record) {
    switch(keycode) {
        case C_DBLC:
        case C_SCRL:
        case C_ZOOM:
            return true;
        default:
            return false;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_case_modes(keycode, record)) {
        return false;
    }
    switch (keycode) {
        case C_CAPW: {
            if (record->event.pressed) {
                enable_caps_word();
            }
            return false;
        }
        case C_SNKC: {
            if (record->event.pressed) {
                enable_xcase_with(KC_UNDS);
            }            
            return false;
        }
        case C_KEBC: {
            if (record->event.pressed) {
                enable_xcase_with(KC_MINUS);
            }            
            return false;
        }
        case C_XCSE: {
            if (record->event.pressed) {
                enable_xcase();
            }            
            return false;
        }
        case C_DBLC:
            if (record->event.pressed) {
                tap_code(KC_BTN1);
            } else {
                tap_code(KC_BTN1);
            }
            return false;
        case C_MLTG:
            if (record->event.pressed) {
                layer_off(_MOUS);
                return true;
            }
        case C_SCRL:
            if (record->tap.count && record->event.pressed) {
                fp_scroll_keycode_toggle();
            } else if (record->event.pressed) {
                fp_scroll_keycode_set(true);
            } else if (!record->tap.count) {
                fp_scroll_keycode_set(false);
            }
            return false;
        case C_ZOOM:
            if (record->tap.count && record->event.pressed) {
                fp_zoom_keycode_toggle();
            } else if (record->event.pressed) {
                fp_zoom_keycode_set(true);
            } else if (!record->tap.count) {
                fp_zoom_keycode_set(false);
            }
            return false;
        default:
            return true;
    }
    return true;
};

layer_state_t layer_state_set_user(layer_state_t state) {
    if (get_highest_layer(state) != _MOUS) {
        fp_zoom_layer_set(false);
        fp_scroll_layer_set(false);
        fp_zoom_keycode_set(false);
        fp_scroll_keycode_set(false);
    }
    return state;
}

const key_override_t comma_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMMA, KC_SCLN);
const key_override_t fstop_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_COLON);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &comma_override,
    &fstop_override,
    NULL // Null terminate the array of overrides!
};
