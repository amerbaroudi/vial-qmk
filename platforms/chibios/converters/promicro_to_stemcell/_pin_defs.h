// Copyright 2022 Mega Mind (@megamind4089)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Pindefs for v2.0.0
// https://megamind4089.github.io/STeMCell/pinout/

// Left side (front)
#ifdef STEMCELL_UART_SWAP
#    define D3 PAL_LINE(GPIOA, 3)
#    define D2 PAL_LINE(GPIOA, 2)
#else
#    define D3 PAL_LINE(GPIOA, 2)
#    define D2 PAL_LINE(GPIOA, 3)
#endif
//      GND
//      GND
#ifdef STEMCELL_I2C_SWAP
#    define D1 PAL_LINE(GPIOB, 6)
#    define D0 PAL_LINE(GPIOB, 7)
#else
#    define D1 PAL_LINE(GPIOB, 7)
#    define D0 PAL_LINE(GPIOB, 6)
#endif

#define D4 PAL_LINE(GPIOA, 15)
#define C6 PAL_LINE(GPIOB, 3)
#define D7 PAL_LINE(GPIOB, 4)
#define E6 PAL_LINE(GPIOB, 5)
#define B4 PAL_LINE(GPIOB, 8)
#define B5 PAL_LINE(GPIOB, 9)

// Right side (front)
//      RAW
//      GND
//      RESET
//      VCC
#define F4 PAL_LINE(GPIOB, 10)
#define F5 PAL_LINE(GPIOB, 2)
#define F6 PAL_LINE(GPIOB, 1)
#define F7 PAL_LINE(GPIOB, 0)

#define B1 PAL_LINE(GPIOA, 5)
#define B3 PAL_LINE(GPIOA, 6)
#define B2 PAL_LINE(GPIOA, 7)
#define B6 PAL_LINE(GPIOA, 4)

// SADEK BEGIN: Keep this to continue to support elite-c pins on stemcell
// PR that broke this: https://github.com/qmk/qmk_firmware/pull/18239
// Elite-c compatible pinout, bottom row
#define B7 PAL_LINE(GPIOC, 13)
#define D5 PAL_LINE(GPIOC, 14)
#define C7 PAL_LINE(GPIOC, 15)
#define F1 PAL_LINE(GPIOA, 0)
#define F0 PAL_LINE(GPIOA, 1)
// SADEK END

// LEDs
// SADEK BEGIN: duplicate reference to D5
// #define D5 PAL_LINE(GPIOA, 8) // User LED
// SADEK END
