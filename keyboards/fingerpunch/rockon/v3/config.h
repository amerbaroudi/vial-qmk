/*
Copyright 2021 Sadek Baroudi <sadekbaroudi@gmail.com>

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

#define DEVICE_VER      0x0003


/* key matrix size */
/* Rows are doubled up */
#define MATRIX_ROWS 9
#define MATRIX_COLS 8

// SHIFT REGISTER
// Only needed for matrix_74hc595_spi.c
#define SHIFTREG_MATRIX_COL_CS B6
#define SHIFTREG_DIVISOR 8 // needs to be the same as the PMW33XX_CS_DIVISOR below
#define MATRIX_ROW_PINS_SR { D4, C6, D7, E6, B4, F4, F5, F6, F7 }

#define RGB_DI_PIN D3
#ifdef RGBLIGHT_ENABLE
  #ifdef RGBLED_NUM
    #undef RGBLED_NUM
  #endif
  #define RGBLED_NUM 69
#endif

#ifdef RGB_MATRIX_ENABLE
  #ifdef DRIVER_LED_TOTAL
    #undef DRIVER_LED_TOTAL
  #endif
  #define DRIVER_LED_TOTAL 69
#endif

// SPI config for shift register (and trackball if enabled)
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN B1
#define SPI_SCK_PAL_MODE 5
#define SPI_MOSI_PIN B2
#define SPI_MOSI_PAL_MODE 5
#define SPI_MISO_PIN B3
#define SPI_MISO_PAL_MODE 5

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A {C7, D5, F1}
#define ENCODERS_PAD_B {D2, B7, F0}

#ifdef CIRQUE_ENABLE
  // cirque trackpad config
  #define CIRQUE_PINNACLE_ADDR 0x2A
  #define POINTING_DEVICE_ROTATION_90
  #define CIRQUE_PINNACLE_TAP_ENABLE
  #define POINTING_DEVICE_TASK_THROTTLE_MS 5
  #define I2C1_CLOCK_SPEED  400000
  #define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2
#endif

#ifdef FP_TRACKBALL_ENABLE
  // Trackball config
  #define FP_POINTING_DEFAULT_DPI 800
  #define PMW33XX_CS_PIN B5
  #define PMW33XX_CPI FP_POINTING_DEFAULT_DPI
  #define PMW33XX_CS_DIVISOR 8 // needs to be the same as the SHIFTREG_DIVISOR above
  #define POINTING_DEVICE_INVERT_Y
#endif

