/*
 * EVA 2.0 - Servo Control Example
 *
 * This is a simplified public example demonstrating
 * the servo-control concept used in EVA 2.0.
 *
 * The complete production firmware is kept private.
 */

#include <Arduino.h>
#include <ESP32Servo.h>

Servo evaServo;

const int SERVO_PIN = 17;

void setup()
{
    evaServo.attach(SERVO_PIN);
    evaServo.write(90);
}

void setServoAngle(int angle)
{
    angle = constrain(angle, 0, 180);
    evaServo.write(angle);
}

void loop()
{
    setServoAngle(45);
    delay(1000);

    setServoAngle(90);
    delay(1000);

    setServoAngle(135);
    delay(1000);
}
