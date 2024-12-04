#pragma once

#define VIAL_KEYBOARD_UID \
    { 0x73, 0xFD, 0x11, 0x1F, 0x7F, 0x19, 0xC9, 0x33 }
#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 1 }
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

#define MOUSEKEY_DELAY 1
#define MOUSEKEY_INTERVAL 8
#define MOUSEKEY_MOVE_DELTA 8
#define MOUSEKEY_MAX_SPEED 2
#define MOUSEKEY_TIME_TO_MAX 100 
#define MOUSEKEY_WHEEL_DELAY 1
#define MOUSEKEY_WHEEL_INTERVAL 100
#define MOUSEKEY_WHEEL_DELTA 1
#define MOUSEKEY_WHEEL_MAX_SPEED 12
#define MOUSEKEY_WHEEL_TIME_TO_MAX 0

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 180                       // limits maximum brightness of LEDs to 180 out of 255. If not defined maximum brightness is set to 255
#define RGB_MATRIX_DEFAULT_ON true                              // Sets the default enabled state, if none has been set
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_RIVERFLOW            // Sets the default mode, if none has been set
#define RGB_MATRIX_DEFAULT_HUE 20                               // Sets the default hue value, if none has been set
#define RGB_MATRIX_DEFAULT_SAT 255                              // Sets the default saturation value, if none has been set
#define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS    // Sets the default brightness value, if none has been set
#define RGB_MATRIX_DEFAULT_SPD 127                              // Sets the default animation speed, if none has been set

#define TAPPING_TERM 250
#define COMBO_TERM 40