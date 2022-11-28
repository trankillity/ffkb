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
    C_MLTG
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case C_DBLC:
            if (record->event.pressed) {
                tap_code(KC_BTN1);
            } else {
                tap_code(KC_BTN1);
            }
            return false;
        case C_MLTG:
            if (record->event.pressed) {
                tap_code(TO(_BASE));
                return true;
            }
    }
    return true;
};

#include "config.h"
#include "g/keymap_combo.h"

#define COMBO_ONLY_FROM_LAYER _COMB

#define C_SELA      C(KC_A)
#define C_UNDO      C(KC_Z)
#define C_CUT       C(KC_X)
#define C_COPY      C(KC_C)
#define C_PAST      C(KC_V)
#define C_REDO      C(KC_Y)

#define C_TABI      KC_TAB
#define C_TABD      S(KC_TAB)
#define C_STAB      FP_SUPER_TAB
#define C_DSKT      G(KC_TAB)
#define C_SCRL      FP_SCROLL_MOMENT
#define C_ZOOM      FP_ZOOM_MOMENT
#define C_ACCL      FP_ACCEL_TOG
// #define C_MLTG      TO(_BASE)

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
    C_SCRL,     KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,               KC_J,       KC_L,       KC_U,       KC_Y,       KC_QUOT,    C_ZOOM,
    C_TABI,     KC_A,       KC_R,       KC_S,       KC_T,       KC_G,               KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       C_TABD,
    OSM_CTL,    KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,               KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    OSM_CTL,
                            KC_NO,      OSL_NUM,    OSM_SFT,    KC_BSPC,            KC_ENTER,   KC_SPC,     OSL_NAV,    KC_NO
),

[_NUMB] = LAYOUT_ffkb(
    KC_F6,      KC_F5,      KC_F4,      KC_F3,      KC_F2,      KC_F1,              KC_EQL,     KC_7,       KC_8,       KC_9,       KC_DOT,     KC_EXLM,
    C_TABI,     OSM_GUI,    OSM_ALT,    OSM_CTL,    OSM_SFT,    _______,            KC_PPLS,    KC_4,       KC_5,       KC_6,       KC_PAST,    KC_GRV,
    KC_F12,     KC_F11,     KC_F10,     KC_F9,      KC_F8,      KC_F7,              KC_MINS,    KC_1,       KC_2,       KC_3,       KC_SLSH,    KC_UNDS,
                            _______,    _______,    _______,    _______,            _______,    KC_0,       _______,    _______
),

[_NAVI] = LAYOUT_ffkb(
    C_ACCL,     KC_INS,     KC_HOME,    KC_UP,      KC_END,     KC_PGUP,            KC_ESC,     C_STAB,     _______,    C_DSKT,     _______,    KC_BSLS,
    C_TABI,     C_SELA,     KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_PGDN,            KC_VOLU,    OSM_SFT,    OSM_CTL,    OSM_ALT,    OSM_GUI,    C_TABD,
    KC_NO,      C_UNDO,     C_CUT,      C_COPY,     C_PAST,     C_REDO,             KC_VOLD,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_MSTP,    KC_MUTE,
                            _______,    _______,    _______,    KC_DEL,             _______,    _______,    _______,    _______
),

[_MOUS] = LAYOUT_ffkb(
    _______,    C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,             C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     _______,
    _______,    C_MLTG,     KC_BTN3,    KC_BTN2,    KC_BTN1,    C_DBLC,             C_DBLC,     KC_BTN1,    KC_BTN2,    KC_BTN3,    C_MLTG,     _______,
    _______,    C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,             C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     _______,
                            _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______
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

const key_override_t comma_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMMA, KC_SCLN);
const key_override_t fstop_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_COLON);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &comma_override,
    &fstop_override,
    NULL // Null terminate the array of overrides!
};
