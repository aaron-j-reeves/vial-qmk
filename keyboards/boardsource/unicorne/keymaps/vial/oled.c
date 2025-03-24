// oled.c
#include QMK_KEYBOARD_H
#include "layers.h"
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

void render_feature_status(const char* label, bool active) {
    oled_write_P(label, active);
    oled_write_P(PSTR(" "), false);
}

void render_status(void) {
    // Get the keyboard LED status
    led_t led_state = host_keyboard_led_state();

    // Clear the OLED display
    oled_clear();

    // First line
    oled_set_cursor(0, 0);
    render_feature_status(PSTR("NUM"), led_state.num_lock);
    oled_set_cursor(0, 2);
    render_feature_status(PSTR("CAPS"), led_state.caps_lock);
    oled_set_cursor(0, 4);
    render_feature_status(PSTR("CW"), is_caps_word_on());
    oled_set_cursor(0, 6);
    render_feature_status(PSTR("SCR"), led_state.scroll_lock);
    oled_set_cursor(0, 8);
    render_feature_status(PSTR("CTL >"), keymap_config.swap_lctl_lgui);
    oled_set_cursor(0, 9);
    render_feature_status(PSTR("WIN"), keymap_config.swap_lctl_lgui);
    oled_set_cursor(0, 11);
    render_feature_status(PSTR("ALT >"), keymap_config.swap_lalt_lgui);
    oled_set_cursor(0, 12);
    render_feature_status(PSTR("WIN"), keymap_config.swap_lalt_lgui);
}
void render_layer(void) {

    oled_clear();

    // Get the current layer state
    uint8_t current_layer = get_highest_layer(layer_state);

    // Iterate over all layers
    for (uint8_t i = 0; i < _LAYER_COUNT; i++) {
        // Set cursor position, leaving a blank line between layers
        oled_set_cursor(0, i * 2);

        // Check if the layer is active
        bool is_active = (current_layer == i);

        // Access layer name directly
        const char *layer_name = layer_names[i];

        // Write the layer name, inverted if active
        oled_write(layer_name, is_active);
    }

}

void oled_render_boot(bool bootloader) {
    oled_clear();
    for (int i = 0; i < 16; i++) {
        oled_set_cursor(0, i);
        if (bootloader) {
            oled_write_P(PSTR("Awaiting New Firmware "), false);
        } else {
            oled_write_P(PSTR("Rebooting "), false);
        }
    }

    oled_render_dirty(true);
}

bool oled_task_user(void) {
    if (is_keyboard_left()) render_status();
    return false;

}

bool shutdown_user(bool jump_to_bootloader) {
    oled_render_boot(jump_to_bootloader);
    return true; // Ensure the function returns a value
}
#endif // OLED_ENABLE






// bool oled_task_user(void) {
//     if (is_keyboard_master()) {
//         render_status();  // Display status on the master side
//     } else {
//         // Non-master side rendering
//         oled_clear();

//         uint8_t current_layer = get_highest_layer(layer_state);

//         // Iterate over all layers
//         for (uint8_t i = 0; i < _LAYER_COUNT; i++) {
//             // Set cursor position, leaving a blank line between layers
//             oled_set_cursor(0, i * 2);

//             // Check if the layer is active
//             bool is_active = (current_layer == i);

//             // Access layer name directly
//             const char *layer_name = layer_names[i];

//             // Write the layer name, inverted if active
//             oled_write(layer_name, is_active);
//         }
//     }
//     return false;
// }
