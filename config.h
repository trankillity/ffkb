#pragma once

#define COMBO_VARIABLE_LEN
#undef COMBO_TERM
#define COMBO_TERM 30

#ifdef FP_POINTING_DEFAULT_DPI
    #undef FP_POINTING_DEFAULT_DPI
    #define FP_POINTING_DEFAULT_DPI 600
#endif
#define FP_POINTING_SCROLLING_DPI 10

#define IGNORE_MOD_TAP_INTERRUPT
// #define PERMISSIVE_HOLD
// #undef IGNORE_MOD_TAP_INTERRUPT
#undef PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS
#define TAPPPING_TERM 120
#define FP_SUPER_TAB_TIMEOUT 750
#define ONESHOT_TIMEOUT 1000

void toggle_accel(void);
