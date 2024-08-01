# AVR ATmega32 Smart Home System
Welcome to the AVR ATmega32 Smart Home System repository! In this project, we’ve designed a simulated smart home system using the AVR ATmega32 microcontroller. Our goal was to create an efficient, user-friendly system that combines home automation with security features.

## Features
### SPI Communication Protocol:
The heart of our system! We’ve implemented SPI communication between the master and slave ATmega32 devices. This allows seamless data exchange and coordination.

### User Interaction:
1. 16x2 LCD Display: Provides a clear interface for users. It prompts for input, displays system status, and guides users through the setup.
2. Keypad: Securely handles password entry and menu selection.
   
### Dual Modes:
#### Admin Mode:
Control LEDs, TV, and air conditioner settings.
Monitor room temperature and trigger an LED if it falls below a threshold.
Securely store admin passwords in EEPROM.

#### Guest Mode:
Manage room LEDs for ambiance.

#### Security Measures:
Block State Handling: After three failed login attempts, the system blocks further access. Block state count stored in EEPROM.

## Getting Started
### Hardware Setup:
Connect your ATmega32 microcontroller, LCD, keypad, LEDs, TV, and air conditioner (simulated in Proteus).
Ensure proper wiring and connections.

### Compile and Flash:
Compile the code using your preferred AVR toolchain (e.g., Atmel Studio, avr-gcc).
Flash the compiled binary onto your ATmega32.

### Simulate in Proteus:
Open Proteus and load your circuit design.
Simulate the smart home system to observe its behavior.
