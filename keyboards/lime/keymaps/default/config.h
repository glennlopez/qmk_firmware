 /* Copyright 2021 HellSingCoder
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

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define RGBLIGHT_SLEEP
#define RGBLIGHT_LAYERS

/* ws2812 RGB LED */
#define RGB_DI_PIN D3

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLED_NUM 5
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 120
#define OLED_FONT_H "keyboards/lime/lib/glcdfont.c"
