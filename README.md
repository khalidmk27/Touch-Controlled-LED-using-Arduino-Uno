# Touch Sensor LED Control

## Overview
This project demonstrates a simple embedded system that uses a touch sensor to control an LED. The code is written in Embedded C for an Arduino Uno and compiled using the Arduino IDE. When the touch sensor is activated, the LED connected to pin D13 lights up.

## Features
- Detects input from a touch sensor connected to pin D10.
- Turns on an LED connected to pin D13 when the touch sensor is activated.
- Uses minimal resources for reliable performance.

## Requirements
- **Hardware:**
  - Arduino Uno
  - Touch sensor module
  - LED
  - Resistors (if required)
  - Connecting wires
- **Software:**
  - Arduino IDE or AVR-GCC toolchain

## Pin Configuration
| Pin  | Function             |
|------|----------------------|
| PB5  | Output to LED (D13)  |
| PB2  | Input from Touch Sensor (D10) |

## File Structure
- **`touch_led.ino`**: Source code for the project.

## How It Works
1. The `touch_led.ino` program configures pin D13 (PB5) as an output for the LED and pin D10 (PB2) as an input for the touch sensor.
2. The program continuously checks the state of the touch sensor input.
3. If the sensor sends a HIGH signal, the LED turns on.
4. If the sensor sends a LOW signal, the LED turns off.

## Usage Instructions
1. **Hardware Setup:**
   - Connect the LED’s anode (long leg) to pin D13 and the cathode (short leg) to GND through a resistor (220 Ω recommended).
   - Connect the touch sensor output to pin D10.
   - Ensure the touch sensor is powered appropriately.

2. **Software Setup:**
   - Open `touch_led.ino` in the Arduino IDE.
   - Select the correct board (**Arduino Uno**) and port.
   - Upload the code to the Arduino Uno.

3. **Run the System:**
   - Activate the touch sensor to observe the LED turning on and off accordingly.

## Notes
- Ensure the touch sensor module provides a stable HIGH signal when activated.
- The code assumes no external pull-up/pull-down resistors are needed; use internal pull-ups if necessary.

## Clone the Repository

To clone this repository, run the following command in your terminal or command prompt:

```bash
git clone https://github.com/khalidmk27/Touch-Controlled-LED-using-Arduino-Uno.git
```

## License
This project is open-source and distributed under the MIT License. Feel free to modify and use it as per your requirements.

