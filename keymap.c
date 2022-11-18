#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    // _CANR,
    _NUMB,
    _NAVI,
    // _MOUS,
    // _SYST,
    _COMB
};

enum custom_keycodes {
    C_CAPW = SAFE_RANGE,
    C_SNKC,
    TGL_ACC,
};

#include "config.h"
#include "g/keymap_combo.h"
// #include "features/casemodes.h"

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    /* Disable combo `SOME_COMBO` on layer `_LAYER_A` */
    switch (combo_index) {
        case btn1:
        case btn2:
        case btn3:
            if (!layer_state_is(_BASE)) {
                return false;
            }
    }

    return true;
}

#define COMBO_ONLY_FROM_LAYER _COMB

#define ___ KC_TRNS

#define C_SELA      C(KC_A)
#define C_UNDO      C(KC_Z)
#define C_CUT       C(KC_X)
#define C_COPY      C(KC_C)
#define C_PAST      C(KC_V)
#define C_REDO      C(KC_Y)

#define C_CLFT      C(KC_LEFT)
#define C_CRGT      C(KC_RIGHT)
#define C_TABI      KC_TAB
#define C_TABD      S(KC_TAB)
#define C_WINI      FP_SUPER_TAB
#define C_WIND      S(FP_SUPER_TAB)
#define C_DSKT      G(KC_TAB)
#define C_PEEK      G(KC_COMMA)
#define C_SCRL      FP_SCROLL_MOMENT
#define C_ZOOM      FP_ZOOM_MOMENT

#define OSM_SFT     OSM(MOD_LSFT)
#define OSM_CTL     OSM(MOD_LCTL)
#define OSM_ALT     OSM(MOD_LALT)
#define OSM_GUI     OSM(MOD_LGUI)

bool accel_enabled = true;

// void toggle_accel(void) {
//     accel_enabled = !accel_enabled;
// }

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Base - Colemak
 *
 * ,-----------------------------------------.            ,-----------------------------------------.
 * |      |   Q  |   W  |   F  |   P  |   B  |            |   J  |   U  |   Y  |   Y  |   '  |      |
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
    C_SCRL,        KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,           KC_J,       KC_L,       KC_U,       KC_Y,       KC_QUOT,    C_ZOOM,
    C_TABI,        KC_A,       KC_R,       KC_S,       KC_T,       KC_G,           KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       C_TABD,
    OSM_CTL,       KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,           KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    OSM_CTL,
                       KC_NO,      OSL(_NUMB),        OSM_SFT,       KC_BSPC,        KC_ENTER,   KC_SPC,       OSL(_NAVI),       KC_NO
),

// [_CANR] = LAYOUT_ffkb(
//     C_MSTG,        KC_W,       KC_L,       KC_Y,       KC_P,       KC_B,           KC_Z,       KC_F,       KC_O,       KC_U,       KC_QUOT,    C_MSTG,
//     C_TABI,        KC_C,       KC_R,       KC_S,       KC_T,       KC_G,           KC_M,       KC_N,       KC_E,       KC_I,       KC_A,       C_TABD,
//     OSM_CTL,       KC_Q,       KC_J,       KC_V,       KC_D,       KC_K,           KC_X,       KC_H,       KC_SLSH,    KC_COMM,    KC_DOT,     OSM_CTL,
//                        KC_NO,      OSL(_NUMB),        OSM_SFT,       KC_BSPC,        KC_ENTER,   KC_SPC,       OSL(_NAVI),       KC_NO
// ),

[_NUMB] = LAYOUT_ffkb(
  KC_F6,    KC_F5,      KC_F4,      KC_F3,      KC_F2,      KC_F1,              KC_EQL,     KC_7,       KC_8,       KC_9,       KC_DOT,         KC_EXLM,
  C_TABI,   OSM_GUI,    OSM_ALT,    OSM_CTL,    OSM_SFT,    _______,            KC_PPLS,    KC_4,       KC_5,       KC_6,       KC_PAST,        KC_GRV,
  KC_F12,   KC_F11,     KC_F10,     KC_F9,      KC_F8,      KC_F7,              KC_MINS,    KC_1,       KC_2,       KC_3,       KC_SLSH,        KC_UNDS,
                    _______, _______, _______, _______,      _______, KC_0, _______, _______
),

[_NAVI] = LAYOUT_ffkb(
  C_SNKC, KC_INS, KC_HOME, KC_UP,   KC_END,  KC_PGUP,      KC_ESC,  C_WIND,  C_WINI,  C_DSKT,  C_PEEK,  KC_BSLS,
  C_TABI, C_SELA, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,      KC_VOLU, OSM_SFT, OSM_CTL, OSM_ALT, OSM_GUI, C_TABD,
  TGL_ACC, C_UNDO, C_CUT,   C_COPY,  C_PAST,  C_REDO,       KC_VOLD, KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP, KC_MUTE,
                    _______, _______, _______, _______,      _______, _______, _______, _______
),

// [_MOUS] = LAYOUT_ffkb(
//   _______, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , _______,
//   _______, KC_NO  , KC_BTN3, KC_BTN2, KC_BTN1, C_SCRL ,      C_SCRL , KC_BTN1, KC_BTN2, KC_BTN3, KC_NO  , _______,
//   _______, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , _______,
//                     _______, _______, _______, _______,      _______, _______, _______, _______
// ),

// [_MOUS] = LAYOUT_ffkb(
//   _______, C_MSTG , C_MSTG , C_MSTG , C_MSTG , C_MSTG ,      C_MSTG , C_MSTG , C_MSTG , C_MSTG , C_MSTG , _______,
//   _______, C_MSTG , KC_BTN3, KC_BTN2, KC_BTN1, C_SCRL ,      C_SCRL , KC_BTN1, KC_BTN2, KC_BTN3, C_MSTG , _______,
//   _______, C_MSTG , C_MSTG , C_MSTG , C_MSTG , C_MSTG ,      C_MSTG , C_MSTG , C_MSTG , C_MSTG , C_MSTG , _______,
//                     _______, _______, _______, _______,      _______, _______, _______, _______
// ),

// [_SYST] = LAYOUT_ffkb(
//   _______, RGB_SPI, RGB_HUI, RGB_SAI, RGB_VAI, RGB_MOD,      RGB_RMOD, RGB_VAD, RGB_SAD, RGB_HUD, RGB_SPD, _______,
//   EEP_RST, _______, _______, DF(_CANR), DF(_BASE), RGB_TOG,      RGB_TOG, DF(_BASE), DF(_CANR), _______, _______, EEP_RST,
//   QK_BOOT, _______, _______, KC_PAUS, KC_PSCR, _______,      _______, KC_PSCR, KC_PAUS, _______, _______, QK_BOOT,
//                     _______, _______, _______, _______,      _______, _______, _______, _______
// ),

// Combo layer. Never to be activated, just used or combo indexing purposes.
[_COMB] = LAYOUT_ffkb(
    KC_1,       KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,           KC_J,       KC_L,       KC_U,       KC_Y,       KC_QUOT,    KC_4,
    KC_2,       KC_A,       KC_R,       KC_S,       KC_T,       KC_G,           KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       KC_5,
    KC_3,       KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,           KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_6,
                            _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______
),

// [BLANK] = LAYOUT_ffkb(
//   _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______,
//                     _______, _______, _______, _______,      _______, _______, _______, _______,
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

// void pointing_device_init_user(void) {
//     set_auto_mouse_layer(_MOUS);
//     set_auto_mouse_enable(true);
// }

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     // Process case modes
//     if (!process_case_modes(keycode, record)) {
//         return false;
//     }

//     // Regular user keycode case statement
//     switch (keycode) {
//         case C_CAPW:
//             if (record->event.pressed) {
//                 enable_caps_word();
//             }
//             return false;
//             break;
//         case C_SNKC:
//             if (record->event.pressed) {
//                 enable_xcase_with(KC_UNDS);
//             }
//             return false;
//             break;
//         default:
//             return true;
//     }
// }
// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     // Regular user keycode case statement
//     switch (keycode) {
//         case TGL_ACC:
//             toggle_accel();
//             return false;
//         default:
//             return true;
//     }
// }

__attribute__((weak)) report_mouse_t pointing_device_task_keymap(report_mouse_t mouse_report) {
    return mouse_report;
}

int sign(int x) {
    return (x > 0) - (x < 0);
}

static uint8_t crv_limit = 80;
static uint8_t min_clamp = 1;

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    mouse_xy_report_t x = mouse_report.x, y = mouse_report.y;
    if (accel_enabled) {
        mouse_report.x = 0;
        mouse_report.y = 0;

        // x = (mouse_xy_report_t)(abs(x) > crv_limit - min_clamp || x == 0 ? (abs(x) / crv_limit) * x + (min_clamp * sign(x)) : x);
        // y = (mouse_xy_report_t)(abs(y) > crv_limit - min_clamp || y == 0 ? (abs(y) / crv_limit) * y + (min_clamp * sign(y)) : y);
        x = (mouse_xy_report_t)(abs(x) > crv_limit - min_clamp || x == 0 ? x : (abs(x) / crv_limit) * x + (min_clamp * sign(x)));
        y = (mouse_xy_report_t)(abs(y) > crv_limit - min_clamp || y == 0 ? y : (abs(y) / crv_limit) * y + (min_clamp * sign(y)));
    }

    mouse_report.x = x;
    mouse_report.y = y;

    return pointing_device_task_keymap(mouse_report);
}
