#include QMK_KEYBOARD_H

#include "config.h"
#include "g/keymap_combo.h"
// #include "casemodes.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _NAVI,
    _MOUS,
    _NUMB,
    _FUNC,
    _SYST,
    _COMB
};

// // Tap Dance declarations
// enum {
//     TD_NF,
// };

// // Tap Dance definitions
// tap_dance_action_t tap_dance_actions[] = {
//     // Tap once for Escape, twice for Caps Lock
//     [TD_NF] = ACTION_TAP_DANCE_DOUBLE(MO(_NUMB), MO(_FUNC)),
// };

#define COMBO_ONLY_FROM_LAYER _BASE

// General Shortcuts
#define C_SNIP      G(S(KC_S))
#define C_TABI      KC_TAB
#define C_TABD      S(KC_TAB)
#define C_STBI      FP_SUPER_TAB
#define C_STBD      S(FP_SUPER_TAB)
#define C_DSKT      G(KC_TAB)
// #define C_ACCL      FP_ACCEL_TOG
#define C_CENT      C(KC_ENTER)

// Data Grip Shortcuts
#define D_FMTC      C(A(KC_L))
#define D_EXPS      C(KC_W)
#define D_COLS      A(S(KC_INS))
#define D_NEWF      A(KC_INS)

// Fingerpunch Shortcuts
// #define F_DPRS      FP_POINT_DPI_RESET
// #define F_DPUP      FP_POINT_DPI_UP
// #define F_DPDN      FP_POINT_DPI_DN
// #define F_SCRS      FP_SCROLL_DPI_RESET
// #define F_SCUP      FP_SCROLL_DPI_UP
// #define F_SCDN      FP_SCROLL_DPI_DN
// #define F_ACTG      FP_ACCEL_TOG

// Oneshots
#define MM(MOD,KEY) MT(MOD_##MOD,KC_##KEY)
#define OSM_SFT     OSM(MOD_LSFT)

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
    KC_NO,      KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,               KC_J,       KC_L,       KC_U,       KC_Y,       KC_QUOT,    KC_NO,
    KC_NO,      MM(LGUI,A), MM(LALT,R), MM(LCTL,S), MM(LSFT,T), KC_G,               KC_M,       MM(RSFT,N), MM(RCTL,E), MM(LALT,I), MM(RGUI,O), KC_NO,
    KC_NO,      KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,               KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_NO,
                            KC_NO,      MO(_NUMB),  OSM_SFT,    KC_BSPC,            KC_ENTER,   KC_SPC,     MO(_NAVI),  KC_NO
),

[_NAVI] = LAYOUT_ffkb(
    KC_NO,      KC_INS,     KC_HOME,    KC_UP,      KC_END,     KC_PGUP,            KC_APP,     C_STBI,     C_STBD,     _______,    C_DSKT,     KC_NO,
    KC_NO,      C(KC_A),    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_PGDN,            KC_VOLU,    KC_RSFT,    KC_RCTL,    KC_LALT,    KC_RGUI,    KC_NO,
    KC_NO,      C(KC_Z),    C(KC_X),    C(KC_C),    C(KC_V),    C(KC_Y),            KC_VOLD,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_MSTP,    KC_NO,
                            _______,    _______,    _______,    KC_DEL,             _______,    _______,    _______,    _______
),

[_MOUS] = LAYOUT_ffkb(
    _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
                            _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______
    // C_SCRL,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,             C_MTOG,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     C_ACCL,
    // C_ZOOM,     C_MLTG,     KC_BTN3,    KC_BTN2,    KC_BTN1,    C_DBLC,             C_MTOG,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     C_ACCL,
    // OSM_CTL,    C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,             C_MTOG,     C_MLTG,     C_MLTG,     C_MLTG,     C_MLTG,     C_ACCL,
    //                         _______,    C_MLTG,     _______,    C_MLTG,             C_MLTG,     C_MLTG,     C_MLTG,     _______
),

[_NUMB] = LAYOUT_ffkb(
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,              KC_EQL,     KC_7,       KC_8,       KC_9,       KC_DOT,     KC_NO,
    KC_NO,      KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    KC_NO,              KC_PPLS,    KC_4,       KC_5,       KC_6,       KC_PAST,    KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,              KC_MINS,    KC_1,       KC_2,       KC_3,       KC_SLSH,    KC_NO,
                            _______,    _______,    _______,    _______,            _______,    _______,    KC_0,       _______
),

[_FUNC] = LAYOUT_ffkb(
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,              KC_NO,      KC_F7,      KC_F8,      KC_F9,      KC_F12,     KC_NO,
    KC_NO,      KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    KC_NO,              KC_NO,      KC_F4,      KC_F5,      KC_F6,      KC_F11,     KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,              KC_NO,      KC_F1,      KC_F2,      KC_F3,      KC_F10,     KC_NO,
                            _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______
),

[_SYST] = LAYOUT_ffkb(
    _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
                            _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______
    // _______,    RGB_TOG,    RGB_RMOD,   RGB_MOD,    _______,    TO(_BASE),          _______,    F_DPRS,     F_SCRS,     _______,    _______,    _______,
    // _______,    RGB_SPI,    RGB_HUI,    RGB_SAI,    RGB_VAI,    _______,            F_ACTG,     F_DPUP,     F_SCUP,     _______,    _______,    _______,
    // _______,    RGB_SPD,    RGB_HUD,    RGB_SAD,    RGB_VAD,    _______,            _______,    F_DPDN,     F_SCDN,     _______,    QK_BOOT,    _______,
    //                         _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______
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

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_ffkb(
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 
                  'L', 'L', '*', 'L',  'R', 'R', 'R', 'R'
    );

const key_override_t comma_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_SCLN);
const key_override_t fstop_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_COLON);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &comma_override,
    &fstop_override,
    NULL // Null terminate the array of overrides!
};
