# Temperature Alarm with Arduino-

This project is a simple temperature alarm built with Arduino, a thermistor (NTC 10k), and a buzzer. When the ambient temperature rises above a set threshold, the buzzer turns on to notify the user.



## Components Used-

1. Arduino Board (WiFi R4, UNO, or similar)
2. 10kΩ NTC Thermistor (marked “102”)
3. 1kΩ resistor (voltage divider)
4. 5V buzzer
5. Breadboard and jumper wires



## How It Works-

1. The thermistor and resistor create a voltage divider; the voltage at the divider is read by the Arduino’s analog pin (A0).
2. Arduino calculates the approximate temperature using the analog value.
3. If the measured temperature exceeds a defined threshold (e.g., 32°C), the buzzer turns on.
4. The system updates every second and prints the current temperature to the Serial Monitor for monitoring.



## What I Learned-

1. Creating analog sensor circuits (voltage divider)
2. Temperature calculation from a thermistor
3. Buzzer interfacing and digital outputs
4. Debugging and tuning thresholds for reliable alerts



# Circuit Diagram-



\[5V] --- \[Thermistor] ----+---- \[A0 Arduino]

&nbsp;                         |

&nbsp;                     \[1kΩ resistor]

&nbsp;                         |

&nbsp;                       \[GND]



Buzzer: + to Arduino D9, - to GND



