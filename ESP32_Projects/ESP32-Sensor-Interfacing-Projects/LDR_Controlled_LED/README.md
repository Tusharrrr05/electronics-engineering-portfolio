# LDR Controlled LED (Automatic Light Control)

## Objective
To automatically control LED brightness based on ambient light intensity using an LDR sensor and PWM.

## Components Used
- ESP32
- LDR (Light Dependent Resistor)
- LED
- Resistor

## Working
The ESP32 reads the light intensity from the LDR through an ADC pin. Based on the measured light level, a PWM signal is generated to control the LED brightness. The LED becomes brighter in darker environments and dimmer in brighter environments.

## Wokwi Simulation
Paste Wokwi link here

## Results
Project tested successfully. The LED brightness adjusted automatically according to surrounding light conditions.