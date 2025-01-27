// config.h
#pragma once

#define SPLIT_TRANSPORT_MIRROR
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP22
#define I2C1_SCL_PIN GP23

#define AUDIO_PIN GP28
#define AUDIO_PWM_DRIVER PWMD6
#define AUDIO_INIT_DELAY
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define STARTUP_SONG SONG(ODE_TO_JOY)

#define SPLIT_POINTING_ENABLE

#if defined (POINTING_DEVICE_DRIVER_ANALOG_JOYSTICK)
// for joystick on right side
#define ANALOG_JOYSTICK_Y_AXIS_PIN GP27
#define ANALOG_JOYSTICK_X_AXIS_PIN GP26
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_RIGHT

// If ANALOG_JOYSTICK_AUTO_AXIS is used, then ANALOG_JOYSTICK_AXIS_MIN and ANALOG_JOYSTICK_AXIS_MAX are ignored.
#define ANALOG_JOYSTICK_AXIS_MIN 0            // Sets the lower range to be considered movement. - default 0
#define ANALOG_JOYSTICK_AXIS_MAX 1000             // Sets the upper range to be considered movement. - default 1023
//#define ANALOG_JOYSTICK_AUTO_AXIS               // Sets ranges to be considered movement automatically.

#define ANALOG_JOYSTICK_SPEED_MAX 5          // The maximum value used for motion. - default 2
#define ANALOG_JOYSTICK_SPEED_REGULATOR 30      // The divisor used to slow down movement. (lower makes it faster) - default 20
#define ANALOG_JOYSTICK_READ_INTERVAL 5         // The interval in milliseconds between reads. - default 10

// By default analog joystick implementation uses x^2 weighting for lever positions. ANALOG_JOYSTICK_WEIGHTS allows to experiment with different configurations that might feel better.
// E.g. This is weights for ((x-0.4)^3+0.064)/0.282:
#define ANALOG_JOYSTICK_WEIGHTS {0,2,4,5,7,8,9,10,12,13,14,15,15,16,17,18,18,19,19,20,20,21,21,21,22,22,22,22,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,24,24,24,24,24,24,25,25,25,26,26,26,27,28,28,29,29,30,31,32,33,34,35,36,37,38,40,41,43,44,46,48,49,51,53,56,58,60,62,65,68,70,73,76,79,82,85,89,92,96,100}
#endif
