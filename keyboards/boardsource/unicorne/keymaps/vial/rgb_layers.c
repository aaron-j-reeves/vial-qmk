// keymap.c
#include QMK_KEYBOARD_H
#include "layers.h"

void pointing_device_init_user(void) {
    // set_auto_mouse_layer(_MOUS); // only required if AUTO_MOUSE_DEFAULT_LAYER is not set to index of <mouse_layer>
    set_auto_mouse_enable(true);         // always required before the auto mouse feature will work
}

bool is_caps_active(void) {
    return host_keyboard_led_state().caps_lock || is_caps_word_on();
}

void update_caps_state(void) {
    static bool caps_state = false;
    bool new_caps_state = is_caps_active();

    if (new_caps_state != caps_state) {
        caps_state = new_caps_state;
    }
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    static bool last_caps_state = false; // Track the previous Caps state

    // Check the current Caps state
    bool current_caps_state = is_caps_active();

    // If the state has changed, call update_caps_state
    if (current_caps_state != last_caps_state) {
        update_caps_state();
        last_caps_state = current_caps_state;
    }

    uint8_t layer = get_highest_layer(layer_state);

    // Set base colors based on the active layer
    for (uint8_t i = led_min; i < led_max; i++) {
        switch (layer) {
            case 12:
                rgb_matrix_set_color(i, RGB_WHITE);
                break;
            case 11:
                rgb_matrix_set_color(i, RGB_CHARTREUSE);
                break;
            case 10:
                rgb_matrix_set_color(i, RGB_CORAL);
                break;
            case 9:
                rgb_matrix_set_color(i, RGB_RED);
                break;
            case 8:
                rgb_matrix_set_color(i, RGB_PINK);
                break;
            case 7:
                rgb_matrix_set_color(i, RGB_AZURE);
                break;
            case 6:
                rgb_matrix_set_color(i, RGB_ORANGE);
                break;
            case 5:
                rgb_matrix_set_color(i, RGB_GREEN);
                break;
            case 4:
                rgb_matrix_set_color(i, RGB_CYAN);
                break;
            case 3:
                rgb_matrix_set_color(i, RGB_PURPLE);
                break;
            case 2:
                rgb_matrix_set_color(i, RGB_BLUE);
                break;
            case 1:
                rgb_matrix_set_color(i, RGB_YELLOW);
                break;
            default:
                break;
        }
    }

    // Check if Caps Lock or Caps Word is active
    if (is_caps_active()) {
        // Set all keylight LEDs to red, excluding Caps Lock key (LED 26)
        for (uint8_t i = led_min; i < led_max; i++) {
            if ((g_led_config.flags[i] & LED_FLAG_KEYLIGHT) && (i != 26)) {
                rgb_matrix_set_color(i, RGB_RED);
            }
        }
        // Set Caps Lock key LED (LED 26) to white
        RGB_MATRIX_INDICATOR_SET_COLOR(26, 255, 255, 255);
    } else {
        // Turn off Caps Lock key LED when inactive
        RGB_MATRIX_INDICATOR_SET_COLOR(26, 0, 0, 0);
    }

    return true;
}

void led_set_user(uint8_t usb_led) {
    update_caps_state();
}

void caps_word_set_user(bool active) {
    update_caps_state();
}
