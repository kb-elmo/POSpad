// Copyright 2022 kb-elmo<mail@elmo.space> (@kb-elmo)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xA68C
#define PRODUCT_ID   0x1478
#define DEVICE_VER   0x0001
#define MANUFACTURER kb_elmo
#define PRODUCT      POS

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2

/* Keyboard Matrix Assignments */
#define DIRECT_PINS {{ B2, C4 }, { D3, C5 }}
#define UNUSED_PINS

/* Backlight */
#define BACKLIGHT_PIN B7
#define BACKLIGHT_LEVELS 8
#define BACKLIGHT_ON_STATE 0

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
