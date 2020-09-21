#include QMK_KEYBOARD_H

enum custom_keycodes {
    SHRUG,
    VSCODE_TOGGLE_TERMINAL,
    VSCODE_NEW_TERMINAL,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SHRUG:
            if (record->event.pressed) {
                SEND_STRING("¯\\_(ツ)_/¯");
            }
            break;
        case VSCODE_TOGGLE_TERMINAL:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("`"));
            }
            break;

        // FIXME: This macro is not working currently.
        case VSCODE_NEW_TERMINAL:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("~"));
            }
            break;
    }
    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_60_ansi(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
                                                                                    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, 
                                                                                    LCTL_T(KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
                                                                                    KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, 
                                                                                    KC_RCTL, KC_LALT, KC_LGUI, KC_SPC, KC_RGUI, TT(1), TT(2), TT(3)),

                                                              [1] = LAYOUT_60_ansi(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, 
                                                                                    KC_TILD, KC_HOME, KC_UP, KC_END, KC_TRNS, KC_TRNS, KC_CALC, KC_TRNS, KC_INS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, RESET, 
                                                                                    SHRUG, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGUP, KC_TRNS, 
                                                                                    KC_MPRV, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY, KC_TRNS, NK_TOGG, KC_TRNS, KC_TRNS, KC_END, KC_PGDN, KC_MNXT, 
                                                                                    GE_SWAP, GE_NORM, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_APP, KC_ESC),

                                                                /* This layer doesn't do much for this board, but this keeps the layers consistent with my DZ60RGB, which helps for
                                                                   switching between boards. */
                                                              [2] = LAYOUT_60_ansi(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, DEBUG,
                                                                                     KC_TRNS, RGB_TOG, KC_TRNS, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, RGB_MOD, RGB_RMOD, RGB_SPI, RGB_SPD, RESET, 
                                                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
                                                                                     KC_TRNS, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, KC_TRNS, KC_TRNS,
                                                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

                                                              [3] = LAYOUT_60_ansi(KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                                                                                    KC_NO, KC_WH_U, KC_MS_U, KC_WH_D, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                                                                                    KC_BTN3, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_WH_R, KC_WH_U, KC_WH_D, KC_WH_L, KC_NO, KC_NO, KC_BTN1, 
                                                                                    KC_BTN2, KC_WH_R, KC_NO, KC_WH_L, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, VSCODE_TOGGLE_TERMINAL, VSCODE_NEW_TERMINAL, KC_NO, 
                                                                                    KC_NO, KC_NO, KC_NO, KC_BTN1, KC_NO, KC_NO, KC_NO, KC_TRNS)};