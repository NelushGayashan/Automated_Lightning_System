#include "src/PIRSensor.h"
#include "src/Relay.h"

// Create instances of PIRSensor and Relay
PIRSensor pirSensor(2); // PIR sensor connected to pin 2
Relay relay(3);         // Relay module connected to pin 3

void setup()
{
    Serial.begin(9600); // Initialize serial communication
}

void loop()
{
    if (pirSensor.isMotionDetected())
    {
        Serial.println("Motion detected!");
        relay.turnOn(); // Turn on the light
    }
    else
    {
        Serial.println("No motion.");
        relay.turnOff(); // Turn off the light
    }

    delay(1000); // Wait for a second before checking again
}
