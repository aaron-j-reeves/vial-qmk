// oled.c
#include QMK_KEYBOARD_H
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

bool oled_task_user(void) {
    if (is_keyboard_left()) render_status();
    return false;

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

bool shutdown_user(bool jump_to_bootloader) {
    oled_render_boot(jump_to_bootloader);
    return true; // Ensure the function returns a value
}
#endif // OLED_ENABLE
