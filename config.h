#pragma once

#define COMBO_VARIABLE_LEN
#undef COMBO_TERM
#define COMBO_TERM 30

#ifdef FP_POINTING_DEFAULT_DPI
    #undef FP_POINTING_DEFAULT_DPI
    #define FP_POINTING_DEFAULT_DPI 800
#endif
#define FP_POINTING_SCROLLING_DPI 10
#define FP_POINTING_ACCELERATION_ENABLE

#ifdef CIRQUE_ENABLE
    #define CIRQUE_PINNACLE_CURVED_OVERLAY
    #ifdef CIRQUE_PINNACLE_TAP_ENABLE
        #undef CIRQUE_PINNACLE_TAP_ENABLE
    #endif
    #ifdef CIRQUE_PINNACLE_POSITION_MODE
        #undef CIRQUE_PINNACLE_POSITION_MODE
    #endif
    #define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_ABSOLUTE_MODE
    #define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE
#endif

#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#define FP_AUTO_MOUSE_TRACKBALL_SENSITIVITY 2
#define AUTO_MOUSE_DEFAULT_LAYER 3
#define AUTO_MOUSE_TIME 1500
#define AUTO_MOUSE_DELAY 500

#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS
#define TAPPPING_TERM 150
#define FP_SUPER_TAB_TIMEOUT 500
#define ONESHOT_TIMEOUT 1000
