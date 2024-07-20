#ifndef RELAY_H
#define RELAY_H

class Relay
{
private:
    int pin; // Pin number for the relay module

public:
    // Constructor to initialize the relay pin
    Relay(int pinNumber);

    // Method to turn the relay on
    void turnOn();

    // Method to turn the relay off
    void turnOff();
};

#endif
