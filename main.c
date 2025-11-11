/*
File: main.c
Language: C
Author: Trevor Carlyle
Date: 10/29/25
Description: Entry point for the Humidity Sensor project using Raspberry Pi Pico.

Responsibilities:
- Initialize hardware and subsystems (sensor, display, LED array)
- Periodically read humidity from the sensor
- Update the LED array and display with the current humidity
- Implements error handling

Assumes the following modules exist:
- sensor.c / sensor.h: for reading humidity values
- display.c / display.h: for updating the screen display
- led_array.c / led_array.h: for controlling the 8-stage LED array

Notes:
- sensor_init(), display_init(), led_array_init(), sensor_read_humidity(), display_show_humidity(), humidity_to_leds(), led_array_set()
  are all assumed to be implemented in their respective modules (sensor.c/.h, display.c/.h, led_array.c/.h)
- The HUMIDITY_CHECK_INTERVAL_MS constant can be adjusted as needed.
*/

// Include standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "pico/stdlib.h"
