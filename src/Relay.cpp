#include "Relay.h"
#include <Arduino.h>

// Constructor to initialize the relay pin
Relay::Relay(int pinNumber) : pin(pinNumber)
{
    pinMode(pin, OUTPUT);   // Set Relay pin as output
    digitalWrite(pin, LOW); // Start with the light off
}

// Method to turn the relay on
void Relay::turnOn()
{
    digitalWrite(pin, HIGH);
}

// Method to turn the relay off
void Relay::turnOff()
{
    digitalWrite(pin, LOW);
}
