# LED Dimmer with Arduino and Potentiometer

This project allows you to smoothly control the brightness of an LED using a trimpot (potentiometer) connected to an Arduino. Turning the trimpot changes the voltage read by the Arduino, which then adjusts the LED brightness using PWM.

## Components Used

- Arduino Board (WiFi R4, UNO, or compatible)
- Potentiometer / Trimpot (1kΩ – 100kΩ)
- 1 LED
- 1 resistor (100Ω , for the LED)
- Breadboard and jumper wires

## How It Works

1. The trimpot acts as a voltage divider, with its wiper (middle pin) providing a variable voltage to the Arduino’s analog input (A0).
2. The Arduino reads this analog value (range: 0–1023) and maps it to a PWM (Pulse-Width Modulation) value between 0 and 255.
3. This PWM value is used to set the brightness of the LED via `analogWrite()` on a PWM-capable digital pin (e.g., D9).
4. As you turn the trimpot, the LED brightness increases or decreases smoothly.

## What I Learned

- Reading analog input values (potentiometer, trimpot) using Arduino
- Mapping sensor values to an output range with `map()`
- Adjusting LED brightness with PWM using `analogWrite()`
- Fundamental breadboarding and circuit assembly