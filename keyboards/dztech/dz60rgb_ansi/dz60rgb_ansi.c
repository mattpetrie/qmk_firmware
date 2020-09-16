#include "dz60rgb_ansi.h"

#ifdef RGB_MATRIX_ENABLE
const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
    { 0, K_14, J_14, L_14 },
    { 0, K_13, J_13, L_13 },
    { 0, K_12, J_12, L_12 },
    { 0, K_11, J_11, L_11 },
    { 0, K_10, J_10, L_10 },
    { 0, K_9,  J_9,  L_9 },
    { 0, K_8,  J_8,  L_8 },
    { 0, K_7,  J_7,  L_7 },
    { 0, K_6,  J_6,  L_6 },
    { 0, K_5,  J_5,  L_5 },
    { 0, K_4,  J_4,  L_4 },
    { 0, K_3,  J_3,  L_3 },
    { 0, K_2,  J_2,  L_2 },
    { 0, K_1,  J_1,  L_1 },

    { 0, H_14, G_14, I_14 },
    { 0, H_13, G_13, I_13 },
    { 0, H_12, G_12, I_12 },
    { 0, H_11, G_11, I_11 },
    { 0, H_10, G_10, I_10 },
    { 0, H_9,  G_9,  I_9 },
    { 0, H_8,  G_8,  I_8 },
    { 0, H_7,  G_7,  I_7 },
    { 0, H_6,  G_6,  I_6 },
    { 0, H_5,  G_5,  I_5 },
    { 0, H_4,  G_4,  I_4 },
    { 0, H_3,  G_3,  I_3 },
    { 0, H_2,  G_2,  I_2 },
    { 0, H_1,  G_1,  I_1 },

    { 0, E_14, D_14, F_14 },
    { 0, E_12, D_12, F_12 },
    { 0, E_11, D_11, F_11 },
    { 0, E_10, D_10, F_10 },
    { 0, E_9,  D_9,  F_9 },
    { 0, E_8,  D_8,  F_8 },
    { 0, E_7,  D_7,  F_7 },
    { 0, E_6,  D_6,  F_6 },
    { 0, E_5,  D_5,  F_5 },
    { 0, E_4,  D_4,  F_4 },
    { 0, E_3,  D_3,  F_3 },
    { 0, E_2,  D_2,  F_2 },
    { 0, E_1,  D_1,  F_1 },

    { 0, B_13, A_13, C_13 },
    { 0, B_11, A_11, C_11 },
    { 0, B_10, A_10, C_10 },
    { 0, B_9,  A_9,  C_9 },
    { 0, B_8,  A_8,  C_8 },
    { 0, B_7,  A_7,  C_7 },
    { 0, B_6,  A_6,  C_6 },
    { 0, B_5,  A_5,  C_5 },
    { 0, B_4,  A_4,  C_4 },
    { 0, B_3,  A_3,  C_3 },
    { 0, B_2,  A_2,  C_2 },
    { 0, B_1,  A_1,  C_1 },

    { 0, B_15, A_15, C_15 },
    { 0, E_13, D_13, F_13 },
    { 0, B_12, A_12, C_12 },
    { 0, E_15, D_15, F_15 },
    { 0, B_16, A_16, C_16 },
    { 0, E_16, D_16, F_16 },
    { 0, H_16, G_16, I_16 },
    { 0, K_16, J_16, L_16 }
};

led_config_t g_led_config = {
    {
        { 13, 12, 11,     10,      9,  8,      7,      6,      5,  4,  3,  2,      1,      0 },
        { 27, 26, 25,     24,     23, 22,     21,     20,     19, 18, 17, 16,     15,     14 },
        { 40, 39, 38,     37,     36, 35,     34,     33,     32, 31, 30, 29, NO_LED,     28 },
        { 52, 51, 50,     49,     48, 47,     46,     45,     44, 43, 42, 41, NO_LED, NO_LED },
        { 60, 59, 58, NO_LED, NO_LED, 57, NO_LED, NO_LED, NO_LED, 56, 55, 54, NO_LED,     53 }
    }, {
        { 216,   0 }, { 192,   0 }, { 176,   0 }, { 160,   0 }, { 144,   0 }, { 128,   0 }, { 112,   0 }, {  96,   0 }, {  80,   0 }, {  64,   0 }, {  48,   0 }, {  32,   0 }, {  16,   0 }, {   0,   0 },
        { 220,  16 }, { 200,  16 }, { 184,  16 }, { 168,  16 }, { 152,  16 }, { 136,  16 }, { 120,  16 }, { 104,  16 }, {  88,  16 }, {  72,  16 }, {  56,  16 }, {  40,  16 }, {  24,  16 }, {   4,  16 },
        { 214,  24 }, { 188,  32 }, { 172,  32 }, { 156,  32 }, { 140,  32 }, { 124,  32 }, { 108,  32 }, {  92,  32 }, {  76,  32 }, {  60,  32 }, {  44,  32 }, {  28,  32 },               {   6,  32 },
        { 210,  48 },               { 180,  48 }, { 164,  48 }, { 148,  48 }, { 132,  48 }, { 116,  48 }, { 100,  48 }, {  84,  48 }, {  68,  48 }, {  52,  48 }, {  20,  48 },               {  10,  48 },
        { 222,  64 }, { 202,  64 }, { 182,  64 },                                           { 162,  64 },                                           { 102,  64 }, {  42,  64 }, {  22,  64 }, {   2,  64 }
    }, {
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,
        1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,
        1, 1, 1,          1,          4, 1, 1, 1
    }
};

void suspend_power_down_kb(void) {
    rgb_matrix_set_suspend_state(true);
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void) {
    rgb_matrix_set_suspend_state(false);
    suspend_wakeup_init_user();
}

__attribute__ ((weak))
void rgb_matrix_indicators_user(void) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(40, 0xFF, 0xFF, 0xFF);
    }
    /* Arrow keys and media controls layer */
    if (layer_state_is(1)) {
        /* Set `/~ to green/ */
        rgb_matrix_set_color(13, 0x00, 0xFF, 0x00);
        /* Set WASD arrow keys to red */
        rgb_matrix_set_color(25, 0xFF, 0x00, 0x00);
        rgb_matrix_set_color(37, 0xFF, 0x00, 0x00);
        rgb_matrix_set_color(38, 0xFF, 0x00, 0x00);
        rgb_matrix_set_color(39, 0xFF, 0x00, 0x00);
        /* Set media controls to blue */
        rgb_matrix_set_color(41, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(48, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(49, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(50, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(51, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(52, 0x00, 0x00, 0xFF);
        /* Set Esc (mapped to lower right corner) to yellow */
        rgb_matrix_set_color(53, 0xFF, 0xFF, 0x00);
    }
    /* RGB controls layer */
    if (layer_state_is(2)) {
        /* White for RGB toggle */
        rgb_matrix_set_color(26, 0xFF, 0xFF, 0xFF);
        /* Red for Hue + */
        rgb_matrix_set_color(24, 0xFF, 0x00, 0x00);
        /* Blue for Hue - */
        rgb_matrix_set_color(23, 0x00, 0x00, 0xFF);
        /* Purple for Saturation + */
        rgb_matrix_set_color(22, 0x7A, 0x00, 0xFF);
        /* Pink for Saturation - */
        rgb_matrix_set_color(21, 0xFF, 0x80, 0xBF);
        /* Azure for Brightness + (this actually looks more white than "White" to me) */
        rgb_matrix_set_color(20, 0x99, 0xf5, 0xFF);
        /* Nothing for Brightness - :) */
        /* Magenta for Mode + */
        rgb_matrix_set_color(18, 0xFF, 0x00, 0xFF);
        /* Cyan for Mode - */
        rgb_matrix_set_color(17, 0x00, 0xFF, 0xFF);
        /* Green for Effect + */
        rgb_matrix_set_color(16, 0x00, 0xFF, 0x00);
        /* Red for Effect - */
        rgb_matrix_set_color(15, 0xFF, 0x00, 0x00);
        /* Gold for bottom row effect switches */
        rgb_matrix_set_color(51, 0xFF, 0xD9, 0x00);
        rgb_matrix_set_color(50, 0xFF, 0xD9, 0x00);
        rgb_matrix_set_color(49, 0xFF, 0xD9, 0x00);
        rgb_matrix_set_color(48, 0xFF, 0xD9, 0x00);
        rgb_matrix_set_color(47, 0xFF, 0xD9, 0x00);
        rgb_matrix_set_color(46, 0xFF, 0xD9, 0x00);
        rgb_matrix_set_color(45, 0xFF, 0xD9, 0x00);
        rgb_matrix_set_color(44, 0xFF, 0xD9, 0x00);
        rgb_matrix_set_color(43, 0xFF, 0xD9, 0x00);
    }
    /* Mouse controls layer */
    if (layer_state_is(3)) {
        /* Set WASD arrow keys to cyan. */
        rgb_matrix_set_color(25, 0x00, 0xFF, 0xFF);
        rgb_matrix_set_color(37, 0x00, 0xFF, 0xFF);
        rgb_matrix_set_color(38, 0x00, 0xFF, 0xFF);
        rgb_matrix_set_color(39, 0x00, 0xFF, 0xFF);
        /* Set hikl and other mouse scroll buttons to charteuse. */
        rgb_matrix_set_color(30, 0x80, 0xFF, 0x00);
        rgb_matrix_set_color(31, 0x80, 0xFF, 0x00);
        rgb_matrix_set_color(32, 0x80, 0xFF, 0x00);
        rgb_matrix_set_color(33, 0x80, 0xFF, 0x00);
        rgb_matrix_set_color(24, 0x80, 0xFF, 0x00);
        rgb_matrix_set_color(26, 0x80, 0xFF, 0x00);
        rgb_matrix_set_color(51, 0x80, 0xFF, 0x00);
        rgb_matrix_set_color(49, 0x80, 0xFF, 0x00);
        /* Set mouse button buttons to white */
        rgb_matrix_set_color(28, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(40, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(52, 0xFF, 0xFF, 0xFF);
        rgb_matrix_set_color(57, 0xFF, 0xFF, 0xFF);
        /* Set mouse acceleration speeds to red/yellow/green */
        rgb_matrix_set_color(12, 0xFF, 0x00, 0x00);
        rgb_matrix_set_color(11, 0xFF, 0xFF, 0x00);
        rgb_matrix_set_color(10, 0x00, 0xFF, 0x00);
        /* Set VSCode shortcuts blue */
        rgb_matrix_set_color(42, 0x00, 0x00, 0xFF);
        rgb_matrix_set_color(43, 0x00, 0x00, 0xFF);
    }
}
#endif
