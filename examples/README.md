# EVA 2.0 — Public Code Examples

This directory contains selected code examples related to the EVA 2.0 AI voice assistant robot.

The examples are provided to demonstrate the type of embedded programming and hardware-control work involved in the project without exposing the complete production firmware.

---

## Purpose

The public examples demonstrate selected concepts used during EVA 2.0 development, including:

- Microcontroller programming
- GPIO control
- PWM-based servo control
- Hardware peripheral integration
- Embedded C/C++ development
- Hardware-to-firmware interaction

---

## Available Examples

### Servo Control

[`servo-control-example.cpp`](servo-control-example.cpp)

This example demonstrates the basic concept of controlling a servo motor from an ESP32-based system using PWM.

It represents a simplified version of the type of servo-control functionality implemented during EVA 2.0 development.

The production implementation contains additional hardware-specific logic and integration with the robot's firmware architecture.

---

## Production Firmware

The complete EVA 2.0 production firmware is intentionally not included in this public repository.

The private implementation contains additional:

- Hardware-specific configuration
- Servo-control logic
- MCP device-control integration
- Audio configuration
- Display integration
- Peripheral initialization
- Robot-specific control logic
- System-level integration
- Debugging and stability modifications

The public examples provide selected implementation concepts while keeping the complete working firmware private.

---

## Relationship to EVA 2.0

The examples in this directory are related to the actual engineering work performed during development of EVA 2.0.

The project combines:

```text
Embedded C/C++
       |
       v
   ESP32-S3
       |
   +---+---+
   |       |
   v       v
 Servo   Peripherals
 Control
   |
   v
Physical Robot
```

The complete system additionally integrates AI voice interaction, digital audio, display communication, MCP-based device control, and power management.

---

## Technology

- ESP32-S3
- C/C++
- ESP-IDF
- GPIO
- PWM
- Embedded Systems
- Servo Control
- Hardware Integration

---

## Code Availability

This repository intentionally provides selected examples and documentation rather than the complete production firmware.

The complete EVA 2.0 firmware remains private as part of the project's development work.

For the complete hardware architecture and implementation documentation, see:

- [Hardware Documentation](../docs/hardware.md)
- [System Architecture](../docs/architecture.md)
- [Testing & Validation](../docs/testing.md)
- [Custom Implementation](../docs/development/custom-implementation.md)

---

## Project

**EVA 2.0 — AI Voice Assistant Robot**

The project is based on and modified from the open-source XiaoZhi ESP32 framework.

Original project:

https://github.com/78/xiaozhi-esp32
