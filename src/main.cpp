#include <Arduino.h>
#include <Servo.h>

/**
 * @file main.cpp
 * @brief Simple Servo Rotation Example
 * @author TANMAY SINGHAL
 * @date 2026-02-17
 *
 * @details
 * Rotates servo motor to 90 degree and 180 degree.
 */

Servo myServo;
int servoPin = 6;

void setup() {
    myServo.attach(servoPin);
}

void loop() {
    myServo.write(90);
    delay(2000);

    myServo.write(180);
    delay(2000);

}
