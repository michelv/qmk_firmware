/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/*
#include "config_common.h"
*/

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x1133
#define DEVICE_VER      0x0100
#define MANUFACTURER    "nguyedt"
#define PRODUCT         "Bento"
#define DESCRIPTION     "2x3 Macropad with Rotary Encoder"

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 3

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { D2, D4, F4 }, \
    { D7, B1, B3 } \
}

/* Handwired Pin Layout:

    { D7, B1, D2 }, \
    { E6, B4, B2 } \
*/

#define ENCODERS_PAD_A {D1}
#define ENCODERS_PAD_B {F5}

#define BACKLIGHT_PIN B6
#define BACKLIGHT_LEVELS 7

#define RGB_DI_PIN D3
#define WS2812_DI_PIN D3
#ifdef RGB_DI_PIN
  #define RGBLED_NUM 11
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
  /*== all animations enable ==*/
  #define RGBLIGHT_ANIMATIONS
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

// #define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4
// #define TAP_CODE_DELAY 10
#define ENCODER_DEFAULT_POS 0x3
