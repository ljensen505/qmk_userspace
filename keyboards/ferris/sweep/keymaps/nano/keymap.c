/*
 * Copyright 2025 Lucas Jensen <lucas@lucasjensen.me>
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

// This keymap is heavilyl inspired by Quentin LEBASTARD's work at bastardkb.com

#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

enum ferris_sweep_layers {
    LAYER_BASE = 0,
    LAYER_FUNCTION,
    LAYER_NAVIGATION,
    LAYER_NUMERAL,
    LAYER_MEDIA,
    LAYER_SYMBOLS
};

#define SPC_NAV LT(LAYER_NAVIGATION, KC_SPC)
#define TAB_FUN LT(LAYER_FUNCTION, KC_TAB)
#define BSP_NUM LT(LAYER_NUMERAL, KC_BSPC)
#define M_SYM LT(LAYER_SYMBOLS, KC_M)

/** Homerow mods for base layer. */
#define HR_A    LGUI_T(KC_A)
#define HR_S    LALT_T(KC_S)
#define HR_D    LCTL_T(KC_D)
#define HR_F    LSFT_T(KC_F)
#define HR_J    LSFT_T(KC_J)
#define HR_K    LCTL_T(KC_K)
#define HR_L    LALT_T(KC_L)
#define HR_QU   RGUI_T(KC_QUOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_BASE] = LAYOUT_split_3x5_2(
    //,--------------------------------------------.                      ,--------------------------------------------.
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                           KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
        HR_A,    HR_S,    HR_D,    HR_F,    KC_G,                           KC_H,    HR_J,    HR_K,    HR_L,   HR_QU,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                           KC_N,    M_SYM,   KC_COMM, KC_DOT, KC_SLSH,
    //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
                                            TAB_FUN, SPC_NAV,       BSP_NUM, KC_ENT
                                //`--------------------------'    `--------------------------'
    ),

    [LAYER_FUNCTION] = LAYOUT_split_3x5_2(
    //,--------------------------------------------.                      ,--------------------------------------------.
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        KC_PSCR,   KC_F7,   KC_F8,   KC_F9,  KC_F12,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
        KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,                        KC_SCRL,   KC_F4,   KC_F5,   KC_F6,  KC_F11,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        KC_PAUS,   KC_F1,   KC_F2,   KC_F3,  KC_F10,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
                                            _______, XXXXXXX,       KC_BSPC, KC_ENT
                               //`--------------------------'    `--------------------------'
   ),

   [LAYER_NAVIGATION] = LAYOUT_split_3x5_2(
    //,--------------------------------------------.                      ,--------------------------------------------.
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                       KC_CAPS, KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        KC_INS, KC_HOME, KC_PGDN, KC_PGUP,  KC_END,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
                                            XXXXXXX, _______,       KC_BSPC, KC_ENT
                               //`--------------------------'    `--------------------------'
    ),

    [LAYER_NUMERAL] = LAYOUT_split_3x5_2(
    //,--------------------------------------------.                      ,--------------------------------------------.
        KC_LBRC,   KC_7,    KC_8,    KC_9, KC_RBRC,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
        KC_SCLN,   KC_4,    KC_5,    KC_6,  KC_EQL,                         XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
        KC_GRV,   KC_1,    KC_2,    KC_3, KC_BSLS,                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
                                            KC_TAB, KC_SPC,         _______, XXXXXXX
                                //`--------------------------'    `--------------------------'
    ),

    [LAYER_MEDIA] = LAYOUT_split_3x5_2(
    //,--------------------------------------------.                      ,--------------------------------------------.
        KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
        KC_MPRV, KC_VOLD, KC_MUTE, KC_VOLU, KC_MNXT,                        KC_MPRV, KC_VOLD, KC_MUTE, KC_VOLU, KC_MNXT,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX,  EE_CLR, QK_BOOT,                        QK_BOOT,  EE_CLR, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
                                            KC_TAB, KC_SPC,         XXXXXXX, _______
                                //`--------------------------'    `--------------------------'
    ),

    [LAYER_SYMBOLS] = LAYOUT_split_3x5_2(
    //,--------------------------------------------.                      ,--------------------------------------------.
        KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
        KC_COLN,  KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,                        XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
        KC_TILD, KC_EXLM,   KC_AT, KC_HASH, KC_PIPE,                        XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
                                            KC_TAB, KC_SPC,         KC_BSPC, KC_ENT
                                //`--------------------------'    `--------------------------'
    )
};

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
