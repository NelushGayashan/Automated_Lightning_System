#include "PIRSensor.h"
#include <Arduino.h>

// Constructor to initialize the PIR sensor pin
PIRSensor::PIRSensor(int pinNumber) : pin(pinNumber)
{
    pinMode(pin, INPUT); // Set PIR pin as input
}

// Method to read the state of the PIR sensor
bool PIRSensor::isMotionDetected()
{
    return digitalRead(pin) == HIGH;
}
