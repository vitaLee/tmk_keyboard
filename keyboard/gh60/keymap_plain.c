#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: QWERTY OSX - swap CAPS and ESC*/
    KEYMAP(CAPS, 1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    MINS, EQL,  BSPC, \
           TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    LBRC, RBRC, ENT,  \
           FN5,  A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT, BSLS, NO,   \
           LSFT, GRV,  Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, RSFT, NO,   \
           LCTL, LALT, LGUI,             SPC,                    NO,   RGUI, FN0,  RALT, RCTL),
    /* 1: QWERTY OSX */
    KEYMAP(FN5,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           CAPS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS,             TRNS,                   TRNS, TRNS, TRNS, TRNS, TRNS),
    /* 2: QWERTY Windows - swap CAPS and ESC*/
    KEYMAP(CAPS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           FN5,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, LGUI, LALT,             TRNS,                   TRNS, TRNS, TRNS, TRNS, TRNS),
    /* 3: QWERTY Windows */
    KEYMAP(FN5,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           CAPS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS,             TRNS,                   TRNS, TRNS, TRNS, TRNS, TRNS),
    /* 4: Fn */
    KEYMAP(TRNS, F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,  DEL, \
           NO,   MPRV, MPLY, MNXT, NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO, \
           TRNS, NO,   VOLD, VOLU, MUTE, NO,   LEFT, DOWN, UP,   RGHT, NO,   NO,   NO,   NO, \
           TRNS, FN1,  FN2,  FN3,  FN4,  NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO, \
           TRNS, TRNS, TRNS,             TRNS,                   NO,   NO,   TRNS, NO,   PAUS),
    /* 5: Fn Numpad + Arrows */
    KEYMAP(TRNS, NO,   NO,   NO,   NO,   NO,   NO,   7,    8,    9,     NO,   NO,   NO,   NO, \
           NO,   NO,   NO,   NO,   NO,   NO,   NO,   4,    5,    6,     NO,   NO,   NO,   NO, \
           TRNS, NO,   NO,   NO,   NO,   NO,   NO,   1,    2,    3,     NO,   NO,   NO,   NO, \
           TRNS, NO,   NO,   NO,   NO,   NO,   NO,   NO,   0,    COMM,  DOT,  NO,   UP,   NO, \
           TRNS, TRNS, TRNS,             TRNS,                   NO,    NO,   LEFT, DOWN, RGHT),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(4),  // to Fn overlay
    [1] = ACTION_DEFAULT_LAYER_SET(0),
    [2] = ACTION_DEFAULT_LAYER_SET(1),
    [3] = ACTION_DEFAULT_LAYER_SET(2),
    [4] = ACTION_DEFAULT_LAYER_SET(3),
    [5] = ACTION_LAYER_TAP_KEY(5, KC_ESC), // to Numpad + Arrows overlay
};
