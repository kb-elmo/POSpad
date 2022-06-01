// Copyright 2022 kb-elmo<mail@elmo.space> (@kb-elmo)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all(
        M0,  M1,
        M2,  M3
    ),
    [1] = LAYOUT_all(
        KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS
    )
};
