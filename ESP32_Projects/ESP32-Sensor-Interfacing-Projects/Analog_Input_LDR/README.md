# Analog Input - LDR Sensor Reading

## Objective
To understand analog input acquisition using the ESP32 ADC by reading light intensity values from an LDR sensor.

## Components Used
- ESP32
- LDR (Light Dependent Resistor)
- Resistor

## Working
The LDR forms a voltage divider circuit whose output voltage varies according to ambient light intensity. The ESP32 reads this varying voltage through an ADC pin and converts it into a digital value that can be displayed on the Serial Monitor.

## Wokwi Simulation
Paste Wokwi link here

## Results
Project tested successfully. The ESP32 accurately measured and displayed varying light intensity values.