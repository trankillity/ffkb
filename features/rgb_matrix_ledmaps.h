/* Copyright 2021 Mikael Manukyan <arm.localhost@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "quantum.h"

#ifdef RGB_MATRIX_LEDMAPS_ENABLED

// clang-format off
#   define RGB_MATRIX_LAYOUT_LEDMAP(                                   \
        k01, k02, k03, k04, k05, k06,   k07, k08, k09, k0A, k0B, k0C,  \
        k11, k12, k13, k14, k15, k16,   k17, k18, k19, k1A, k1B, k1C,  \
        k21, k22, k23, k24, k25, k26,   k27, k28, k29, k2A, k2B, k2C,  \
                  t01, t02, t03,   t04, t05, t06                       \
    )                                                                  \
    {                                                                  \
        {k21}, {k11}, {k01}, {k02}, {k12}, {k22}, {k23}, {k13}, {k03}, \
        {k04}, {k14}, {k24}, {k25}, {k15}, {k05}, {k06}, {k16}, {k26}, \
        {t01}, {t02}, {t03}, {t04}, {t05}, {t06},                      \
        {k27}, {k17}, {k07}, {k08}, {k18}, {k28}, {k29}, {k19}, {k09}, \
        {k0A}, {k1A}, {k2A}, {k2B}, {k1B}, {k0B}, {k0C}, {k1C}, {k2C}  \
    }
// clang-format on
typedef uint8_t ledmap[DRIVER_LED_TOTAL][3];
extern const ledmap ledmaps[];

void set_layer_rgb(uint8_t led_min, uint8_t led_max, int layer);

void rgb_matrix_layers_enable(void);
void rgb_matrix_layers_disable(void);

#endif  // RGB_MATRIX_LEDMAPS_ENABLED

void rgb_matrix_indicators_keymap(void);
void rgb_matrix_indicators_advanced_keymap(uint8_t led_min, uint8_t led_max);
