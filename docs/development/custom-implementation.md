# EVA 2.0 — Custom Implementation

This document describes the engineering work performed while adapting the XiaoZhi ESP32 framework for the custom EVA 2.0 robot hardware.

The complete working firmware is kept private. This repository provides selected implementation details and documentation to demonstrate the engineering work without exposing the complete source code.

---

## 1. Base Framework

EVA 2.0 uses the open-source XiaoZhi ESP32 framework as its software foundation.

The framework provides the core AI voice-interaction architecture and MCP-based device-control functionality.

My work focused on adapting this foundation to custom EVA 2.0 hardware.

---

## 2. Custom Hardware Integration

The original framework was adapted to work with the EVA 2.0 hardware platform.

### Integrated Hardware

- ESP32-S3
- SPI display
- INMP441 digital MEMS microphone
- MAX98357A I2S audio amplifier
- Speaker
- Multiple servo motors
- Battery-powered system
- DC-DC power regulation

---

## 3. Firmware Customization

The firmware was modified to support the requirements of the custom robot.

Major areas of customization include:

- Custom board and peripheral configuration
- Servo control
- GPIO configuration
- PWM control
- SPI display integration
- I2S microphone configuration
- I2S audio output
- MCP-based device control
- Hardware-specific initialization
- Power-related configuration
- Debugging and stability improvements

---

## 4. Servo Control

A custom servo-control implementation was integrated into the firmware.

The system allows the ESP32-S3 to control physical servo mechanisms through GPIO/PWM interfaces.

The implementation was developed specifically around the mechanical requirements of EVA 2.0.

The complete servo implementation is intentionally not published in this repository.

---

## 5. Audio System

EVA 2.0 uses a digital audio pipeline:

```text
INMP441 Microphone
        |
        | I2S
        v
    ESP32-S3
        |
        | I2S
        v
   MAX98357A
        |
        v
     Speaker
```

This provides digital microphone input and digital audio output for the voice-interaction system.

---

## 6. Display Interface

The robot uses an SPI display for visual feedback.

The display is used as part of the robot's user interface and provides visual information during operation.

The display configuration was adapted to the custom EVA 2.0 hardware.

---

## 7. MCP Device Control

The MCP architecture was used to connect AI interaction with physical device functionality.

Conceptually:

```text
        AI / LLM
            |
            v
       MCP Interface
            |
            v
        ESP32-S3
            |
       +----+----+
       |         |
       v         v
    Servos     GPIO
```

This allows software-level commands to interact with physical hardware.

The complete custom MCP implementation remains private.

---

## 8. Engineering Challenges

During development, several hardware and firmware problems had to be investigated and resolved.

Examples include:

- Servo control and GPIO conflicts
- Audio interface configuration
- Display initialization
- Power stability
- Peripheral integration
- Firmware configuration
- Hardware wiring issues
- Communication between software and physical hardware

These issues required iterative hardware testing, firmware debugging, and configuration changes.

---

## 9. Development Approach

The development process followed an iterative hardware/software integration cycle:

```text
Requirement
    |
    v
Hardware Integration
    |
    v
Firmware Configuration
    |
    v
Testing
    |
    v
Debugging
    |
    v
Modification
    |
    v
Hardware Validation
    |
    +-------> Repeat
```

---

## 10. Source Code Policy

The complete EVA 2.0 firmware is not included in this public repository.

Only selected examples and documentation may be published here.

The purpose of this repository is to demonstrate the engineering architecture, hardware integration, development process, and selected implementation work while keeping the complete working firmware private.

---

## Credits

This project uses and modifies the open-source XiaoZhi ESP32 framework.

Original project:

https://github.com/78/xiaozhi-esp32

The original project and its authors remain credited for the underlying framework.
