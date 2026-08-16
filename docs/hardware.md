# EVA 2.0 — Hardware Documentation

## Main Controller

**ESP32-S3**

The ESP32-S3 acts as the central controller of EVA 2.0 and handles:

- AI communication
- Audio input/output
- Display communication
- Servo control
- GPIO control
- Wi-Fi connectivity
- Device-control functions

---

## Display

**240 × 240 SPI Display**

The display provides visual feedback and user-interface information.

### Connections

| Signal | GPIO |
|---|---:|
| BLK | 46 |
| DC | 10 |
| RES | 9 |
| SDA | 11 |
| SCL | 12 |
| VCC | 3.3V |

---

## Audio Input

**INMP441 MEMS Microphone**

The INMP441 provides digital audio input to the ESP32-S3 through I2S.

### Connections

| Signal | GPIO |
|---|---:|
| SD | 6 |
| SCK | 5 |
| WS | 4 |
| L/R | GND |
| VCC | 3.3V |

---

## Audio Output

**MAX98357A I2S Audio Amplifier**

The MAX98357A receives digital audio from the ESP32-S3 and drives the speaker.

### Connections

| Signal | GPIO / Connection |
|---|---:|
| DIN | 7 |
| BCLK | 15 |
| LRC | 16 |
| VIN | 5V |
| GAIN | 10kΩ to GND |
| SD | 10kΩ to 5V |

---

## Servo System

EVA 2.0 uses multiple servo motors for physical movement.

The servo system is controlled by the ESP32-S3 using PWM.

### Servo Connections

| Servo | GPIO |
|---|---:|
| S1 | 17 |
| S2 | 13 |
| S3 | 14 |
| S4 | 21 |

The servo power system is separated from the main logic power where required to reduce voltage drops and instability caused by servo current spikes.

---

## Power Architecture

The robot uses rechargeable Li-ion cells with DC-DC buck converters to provide regulated power to different parts of the system.

The power architecture separates high-current servo loads from sensitive electronics where possible.

### Main Power Domains

**Logic / Electronics**

- ESP32-S3
- Display
- INMP441
- Audio electronics

**Servo Power**

- Servo motors
- Separate regulated 5V supply
- Additional bulk capacitance for transient current demand

---

## Hardware Integration

The main hardware integration can be summarized as:

```text
                    Li-ion Battery
                          |
                 +--------+--------+
                 |                 |
                 v                 v
          Logic Power         Servo Power
                 |                 |
                 v                 v
             ESP32-S3           Servos
                 |
       +---------+---------+
       |         |         |
       v         v         v
   INMP441   Display   MAX98357A
       |                   |
       |                   v
       |                Speaker
       |
       v
   Voice Input
