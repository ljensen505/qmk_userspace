/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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

 #include QMK_KEYBOARD_H

 /** Homerow mods for base layer. */
 #define HR_A    LGUI_T(KC_A)
 #define HR_S    LALT_T(KC_S)
 #define HR_D    LSFT_T(KC_D)
 #define HR_F    LCTL_T(KC_F)
 #define HR_J    RCTL_T(KC_J)
 #define HR_K    RSFT_T(KC_K)
 #define HR_L    LALT_T(KC_L)
 #define HR_SCLN RGUI_T(KC_SCLN)

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

   [0] = LAYOUT_split_3x5_3(
   //,--------------------------------------------.                      ,--------------------------------------------.
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                           KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
   //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
        HR_A,    HR_S,    HR_D,    HR_F,    KC_G,                           KC_H,    HR_J,    HR_K,    HR_L,   HR_SCLN,
   //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                           KC_N,    KC_M,   KC_COMM, KC_DOT, KC_SLSH,
   //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
                                   KC_ENT, KC_TAB, MO(1),          MO(2),  KC_SPC , KC_BSPC
                              //`--------------------------'    `--------------------------'
   ),

   [1] = LAYOUT_split_3x5_3(
   //,--------------------------------------------.                      ,--------------------------------------------.
       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7,    KC_8,     KC_9,    KC_0,
   //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
       KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,                        KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, XXXXXXX,
   //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
   //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
                                  XXXXXXX, XXXXXXX, _______,       MO(3),  KC_GRV,  KC_ESC
                              //`--------------------------'    `--------------------------'
   ),

   [2] = LAYOUT_split_3x5_3(
   //,--------------------------------------------.                      ,--------------------------------------------.
       KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
   //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
       KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,
   //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
       XXXXXXX, XXXXXXX, XXXXXXX, KC_QUOT, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
   //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
                                  _______,  _______,  MO(3),     _______, XXXXXXX, XXXXXXX
                              //`--------------------------'    `--------------------------'
   ),

   [3] = LAYOUT_split_3x5_3(
   //,--------------------------------------------.                      ,--------------------------------------------.
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_PSCR,   KC_F7,   KC_F8,   KC_F9,  KC_F12,
   //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
       RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      KC_SCRL,   KC_F4,   KC_F5,   KC_F6,  KC_F11,
   //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
       RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      KC_PAUS,   KC_F1,   KC_F2,   KC_F3,  KC_F10,
   //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
                                  _______,  _______, _______,     _______, _______, _______
                              //`--------------------------'    `--------------------------'
   )
 };
