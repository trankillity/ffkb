#undef RGB_MATRIX_MAXIMUM_BRIGHTNESS
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200

#undef RGB_MATRIX_KEYPRESSES
#undef RGB_MATRIX_FRAMEBUFFER_EFFECTS
#undef RGB_MATRIX_KEYREACTIVE_ENABLED
#undef ENABLE_RGB_MATRIX_ALPHAS_MODS
#undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#undef ENABLE_RGB_MATRIX_BREATHING
#undef ENABLE_RGB_MATRIX_BAND_SAT
#undef ENABLE_RGB_MATRIX_BAND_VAL
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#undef ENABLE_RGB_MATRIX_CYCLE_ALL
#undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#undef ENABLE_RGB_MATRIX_DUAL_BEACON
#undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
#undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#undef ENABLE_RGB_MATRIX_RAINDROPS
#undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#undef ENABLE_RGB_MATRIX_DIGITAL_RAIN
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#undef ENABLE_RGB_MATRIX_SPLASH
#undef ENABLE_RGB_MATRIX_MULTISPLASH
#undef ENABLE_RGB_MATRIX_SOLID_SPLASH
#undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH

#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYREACTIVE_ENABLED

// #define ENABLE_RGB_MATRIX_ALPHAS_MODS
// #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
// #define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
// #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
// #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
// #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
// #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
// #define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
// #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
// #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
// #define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
// #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
// #define ENABLE_RGB_MATRIX_DUAL_BEACON
// #define ENABLE_RGB_MATRIX_RAINBOW_BEACON
// #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
// #define ENABLE_RGB_MATRIX_RAINDROPS
// #define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
// #define ENABLE_RGB_MATRIX_HUE_BREATHING
// #define ENABLE_RGB_MATRIX_HUE_PENDULUM
// #define ENABLE_RGB_MATRIX_HUE_WAVE
// #define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// #define ENABLE_RGB_MATRIX_PIXEL_FLOW
// #define ENABLE_RGB_MATRIX_PIXEL_RAIN

#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
// #define RGB_MATRIX_TYPING_HEATMAP_SLIM
#define RGB_MATRIX_TYPING_HEATMAP_SPREAD 20
#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 50

#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
// #define ENABLE_RGB_MATRIX_SPLASH
// #define ENABLE_RGB_MATRIX_MULTISPLASH
// #define ENABLE_RGB_MATRIX_SOLID_SPLASH
// #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH


#undef _______
#define _______ HSV_OFF

// HSV convenience shortcuts
#define HIGHLGT	191,66,55
#define NUMBERS	201,38,163
#define FUNCTNS	37,186,219
#define MDIACTR	195,181,201
#define MODIFRS	131,219,247
#define DIRARWS	96,128,212
#define WARNING	3,115,173
#define WHITEFN	1,26,230

const ledmap PROGMEM ledmaps[] = {
/*
    Blank LED Map
    _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
                                        _______,    _______,    _______,            _______,    _______,    _______
*/
    [_BASE] = RGB_MATRIX_LAYOUT_LEDMAP(
    HIGHLGT,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    HIGHLGT,
    HIGHLGT,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    HIGHLGT,
    HIGHLGT,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    HIGHLGT,
                                        HIGHLGT,    HIGHLGT,    HIGHLGT,            HIGHLGT,    HIGHLGT,    HIGHLGT
    ),
    [_CANR] = RGB_MATRIX_LAYOUT_LEDMAP(
    HIGHLGT,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    HIGHLGT,
    HIGHLGT,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    HIGHLGT,
    HIGHLGT,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    HIGHLGT,
                                        HIGHLGT,    HIGHLGT,    HIGHLGT,            HIGHLGT,    HIGHLGT,    HIGHLGT
    ),
    [_GAM0] = RGB_MATRIX_LAYOUT_LEDMAP(
    HIGHLGT,    _______,    _______,    DIRARWS,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    HIGHLGT,    _______,    DIRARWS,    DIRARWS,    DIRARWS,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    HIGHLGT,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
                                        HIGHLGT,    HIGHLGT,    HIGHLGT,            _______,    WARNING,    _______
    ),
    [_GAM1] = RGB_MATRIX_LAYOUT_LEDMAP(
    HIGHLGT,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    HIGHLGT,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    HIGHLGT,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
                                        HIGHLGT,    HIGHLGT,    HIGHLGT,            _______,    WARNING,    _______
    ),
    [_GAM2] = RGB_MATRIX_LAYOUT_LEDMAP(
    HIGHLGT,    NUMBERS,    NUMBERS,    NUMBERS,    NUMBERS,    FUNCTNS,            _______,    _______,    _______,    _______,    _______,    _______,
    HIGHLGT,    NUMBERS,    NUMBERS,    NUMBERS,    NUMBERS,    FUNCTNS,            _______,    _______,    _______,    _______,    _______,    _______,
    HIGHLGT,    NUMBERS,    NUMBERS,    NUMBERS,    NUMBERS,    FUNCTNS,            _______,    _______,    _______,    _______,    _______,    _______,
                                        HIGHLGT,    HIGHLGT,    HIGHLGT,            _______,    WARNING,    _______
    ),
    [_NUMB] = RGB_MATRIX_LAYOUT_LEDMAP(
    FUNCTNS,    FUNCTNS,    FUNCTNS,    FUNCTNS,    FUNCTNS,    FUNCTNS,            _______,    NUMBERS,    NUMBERS,    NUMBERS,    _______,    _______,
    HIGHLGT,    MODIFRS,    MODIFRS,    MODIFRS,    MODIFRS,    _______,            _______,    NUMBERS,    NUMBERS,    NUMBERS,    _______,    _______,
    FUNCTNS,    FUNCTNS,    FUNCTNS,    FUNCTNS,    FUNCTNS,    FUNCTNS,            _______,    NUMBERS,    NUMBERS,    NUMBERS,    _______,    _______,
                                        HIGHLGT,    _______,    _______,            _______,    NUMBERS,    _______
    ),
    [_NAVI] = RGB_MATRIX_LAYOUT_LEDMAP(
    WHITEFN,    FUNCTNS,    FUNCTNS,    DIRARWS,    FUNCTNS,    FUNCTNS,            WARNING,    FUNCTNS,    FUNCTNS,    FUNCTNS,    FUNCTNS,    _______,
    HIGHLGT,    FUNCTNS,    DIRARWS,    DIRARWS,    DIRARWS,    FUNCTNS,            MDIACTR,    MODIFRS,    MODIFRS,    MODIFRS,    MODIFRS,    HIGHLGT,
    WHITEFN,    FUNCTNS,    FUNCTNS,    FUNCTNS,    FUNCTNS,    FUNCTNS,            MDIACTR,    MDIACTR,    MDIACTR,    MDIACTR,    MDIACTR,    MDIACTR,
                                        _______,    _______,    _______,            _______,    _______,    HIGHLGT
    ),
    [_MOUS] = RGB_MATRIX_LAYOUT_LEDMAP(
    _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    _______,    MODIFRS,    MODIFRS,    MODIFRS,    MODIFRS,    WARNING,            WARNING,    MODIFRS,    MODIFRS,    MODIFRS,    MODIFRS,    _______,
    _______,    _______,    FUNCTNS,    FUNCTNS,    FUNCTNS,    _______,            _______,    FUNCTNS,    FUNCTNS,    FUNCTNS,    _______,    _______,
                                        _______,    _______,    _______,            _______,    _______,    _______
    ),
    [_SYST] = RGB_MATRIX_LAYOUT_LEDMAP(
    _______,    MDIACTR,    MDIACTR,    MDIACTR,    MDIACTR,    MDIACTR,            MDIACTR,    MDIACTR,    MDIACTR,    MDIACTR,    MDIACTR,    _______,
    WARNING,    _______,    _______,    FUNCTNS,    FUNCTNS,    WHITEFN,            WHITEFN,    FUNCTNS,    FUNCTNS,    _______,    _______,    WARNING,
    WARNING,    _______,    _______,    FUNCTNS,    FUNCTNS,    _______,            _______,    FUNCTNS,    FUNCTNS,    _______,    _______,    WARNING,
                                        HIGHLGT,    _______,    _______,            _______,    _______,    HIGHLGT
    ),
};