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
- led_array.c / led_array.h: for controlling the 6-stage LED array
*/
