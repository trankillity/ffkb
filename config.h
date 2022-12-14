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
