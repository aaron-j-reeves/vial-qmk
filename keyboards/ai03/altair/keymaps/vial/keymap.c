/* Copyright 2024 ai03 Design Studio */
/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_ESC,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC, KC_RBRC,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_GRAVE,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_HOME, KC_END,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_TAB,     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_PGUP, KC_PGDN,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        SC_LSPO,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    MO(3),   MO(4),    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC,
                                      KC_LGUI, KC_LALT, MO(1),   KC_ENT,  KC_SPC,  MO(2),   KC_RGUI,  KC_DEL
    ),

    [1] = LAYOUT(
        _______,      KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,    _______,  _______,   KC_F6, KC_F7, KC_F8,  KC_F9,  KC_F10,  KC_BSPC,
        _______,    _______, LSA(KC_UP),  A(KC_UP),LSA(KC_DOWN),    _______,    _______,  _______, KC_PMNS,  KC_7,  KC_8,   KC_9,   KC_PSLS, KC_F11,
        _______,    _______,    KC_HOME, A(KC_DOWN),     KC_END,    _______,    _______,  _______, KC_PPLS,  KC_4,  KC_5,   KC_6,   KC_PAST, KC_F12,
        _______,    C(KC_Z),    C(KC_X),    C(KC_C),    C(KC_V),    C(KC_Y),    _______,    MO(7),  KC_EQL,  KC_1,  KC_2,   KC_3,   KC_PENT, _______,
                                                    _______, _______, _______, _______,    _______,  MO(5), _______, _______
    ),

    [2] = LAYOUT(
        _______,  LSA(KC_K), LCA(KC_UP),  S(KC_UP),LCA(KC_DOWN),  LSA(KC_I),    C(KC_Z),  _______, _______, _______, _______,   _______,   _______,  _______,
        _______,    KC_HOME, C(KC_LEFT),      KC_UP, C(KC_RGHT),     KC_END,    C(KC_X),  _______,  KC_ENT,  MS_WHLL,    MS_UP,  MS_WHLR,  _______,   _______,
        _______, S(KC_LEFT),    KC_LEFT,    KC_DOWN,    KC_RGHT, S(KC_RGHT),    C(KC_C),  _______, MS_WHLU,  MS_LEFT,  MS_DOWN,  MS_RGHT,  MS_BTN5,   _______,
        _______, S(KC_HOME),RCS(KC_LEFT),S(KC_DOWN),RCS(KC_RGHT), S(KC_END),    C(KC_V),    MO(7), MS_WHLD,  MS_BTN1,  MS_BTN3,  MS_BTN2,  MS_BTN4,   _______,
                                                    _______, _______, _______, _______,    _______,  MO(5), _______, _______
    )

};
