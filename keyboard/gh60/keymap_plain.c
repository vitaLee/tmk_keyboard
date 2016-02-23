#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(CAPS, 1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    MINS, EQL,  BSPC, \
           TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    LBRC, RBRC, ENT,  \
           ESC,  A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT, BSLS, NO,   \
           LSFT, GRV,  Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, RSFT, NO,   \
           LCTL, LALT, LGUI,             SPC,                    NO,   RGUI, FN0,  RALT, RCTL),
    /* 1: Fn */
    KEYMAP(NO,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,    F10,  F11,  F12,  NO, \
           NO,   MPRV, MPLY, MNXT, NO,   NO,   NO,   NO,   NO,   NO,    NO,   NO,   NO,   NO, \
           NO,   NO,   VOLD, VOLU, MUTE, NO,   LEFT, UP,   DOWN, RIGHT, NO,   NO,   NO,   NO, \
           NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,    NO,   NO,   NO,   NO, \
           NO,   NO,   NO,               NO,                     NO,    NO,   FN0,  NO,   NO),
};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
};
