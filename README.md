# microcontroller2
1. Clone the repository.
2. Open it in VSCode. Make sure you have the Raspberry Pi Pico extension downloaded.
3. Open sensor.c. This should trigger the Pico extension functionality.
4. Make sure your wiring matches the diagram listed below.
5. Plug in the Pico while holding down the bootsel button on the Pico.
6. Press the Run button in the bottom left corner of VSCode. This should start the program.
7. (Optional) By default, the sensor program will blink when reading and processing data from the sensor. You can change the mode by changing the BLINK_AFTER_INIT value to true in line 50 of the sensor.h file. This will cause the sensor to run the example Blink program after successful initialization of the onboard LED and the DHT20 sensor.

## DHT20 wiring information
*Note: This is also written out in sensor.c.*

GPIO 6 (pin 9) -> SDA on DHT20
GPIO 7 (pin 10) -> SCL on DHT20
3.3v (pin 36) -> VCC on DHT20
GND (pin 38) -> GND on DHT20
