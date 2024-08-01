# Bill of Materials (BoM) for Sun Tracker Project

This document lists all the components and materials needed to build the Single-Axis and Two-Axis Sun Tracker projects.

## Single-Axis Sun Tracker

### Components

| Item                         | Quantity | Specifications                     | Description                                         |
|------------------------------|----------|-------------------------------------|-----------------------------------------------------|
| Arduino Board                | 1        | Arduino Uno or compatible          | The main microcontroller board                      |
| Light Dependent Resistors (LDRs) | 2    | Any standard LDR                   | Sensors to detect light intensity                   |
| Servo Motor                  | 1        | SG90 or similar                    | Motor to control the movement in one axis           |
| Resistors                    | 2        | 10kΩ                               | Pull-down resistors for the LDRs                    |
| Breadboard                   | 1        | Standard size                      | For assembling the circuit                          |
| Jumper Wires                 | As needed| Male-to-male and male-to-female    | For connecting components                           |
| USB Cable                    | 1        | Type A to B or micro USB           | For connecting the Arduino to the computer          |
| Power Supply                 | 1        | 5V, 2A                             | To power the Arduino board and servo (if needed)    |

### Assembly Instructions

1. **Arduino Setup**:
    - Connect the Arduino board to your computer using a USB cable.
    - Upload the `SingleAxisSunTracker.ino` file to the Arduino using the Arduino IDE or Visual Studio Code with PlatformIO.

2. **Connecting LDRs**:
    - Place the LDRs on the breadboard.
    - Connect one end of each LDR to the 5V power rail.
    - Connect the other end of each LDR to analog pins A0 and A1 on the Arduino.
    - Connect a 10kΩ resistor between each LDR and the ground rail.

3. **Connecting the Servo**:
    - Connect the signal wire of the servo to digital pin 9 on the Arduino.
    - Connect the power and ground wires of the servo to the 5V and GND rails, respectively.

## Two-Axis Sun Tracker

### Components

| Item                         | Quantity | Specifications                     | Description                                         |
|------------------------------|----------|-------------------------------------|-----------------------------------------------------|
| Arduino Board                | 1        | Arduino Uno or compatible          | The main microcontroller board                      |
| Light Dependent Resistors (LDRs) | 4    | Any standard LDR                   | Sensors to detect light intensity                   |
| Servo Motors                 | 2        | SG90 or similar                    | Motors to control the movement in two axes          |
| Resistors                    | 4        | 10kΩ                               | Pull-down resistors for the LDRs                    |
| Breadboard                   | 1        | Standard size                      | For assembling the circuit                          |
| Jumper Wires                 | As needed| Male-to-male and male-to-female    | For connecting components                           |
| USB Cable                    | 1        | Type A to B or micro USB           | For connecting the Arduino to the computer          |
| Power Supply                 | 1        | 5V, 2A                             | To power the Arduino board and servos (if needed)   |

### Assembly Instructions

1. **Arduino Setup**:
    - Connect the Arduino board to your computer using a USB cable.
    - Upload the `TwoAxisSunTracker.ino` file to the Arduino using the Arduino IDE or Visual Studio Code with PlatformIO.

2. **Connecting LDRs**:
    - Place the LDRs in a cross pattern on the breadboard.
    - Connect one end of each LDR to the 5V power rail.
    - Connect the other ends of the LDRs to analog pins A0, A1, A2, and A3 on the Arduino.
    - Connect a 10kΩ resistor between each LDR and the ground rail.

3. **Connecting the Servos**:
    - Connect the signal wire of the horizontal servo to digital pin 9 on the Arduino.
    - Connect the signal wire of the vertical servo to digital pin 10 on the Arduino.
    - Connect the power and ground wires of the servos to the 5V and GND rails, respectively.

## Optional Components

| Item                         | Quantity | Specifications                     | Description                                         |
|------------------------------|----------|-------------------------------------|-----------------------------------------------------|
| Solar Panel                  | 1        | Small size, 5V output               | To track the sun                                     |
| Battery                      | 1        | 7.4V, 2200mAh                       | To power the system without a direct power source    |
| Battery Holder               | 1        | For 18650 batteries                 | To hold and connect the battery                      |


