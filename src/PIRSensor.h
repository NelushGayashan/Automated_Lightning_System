#ifndef PIR_SENSOR_H
#define PIR_SENSOR_H

class PIRSensor {
  private:
    int pin; // Pin number for the PIR sensor
 
  public:
    // Constructor to initialize the PIR sensor pin
    PIRSensor(int pinNumber);
    
    // Method to read the state of the PIR sensor
    bool isMotionDetected();
};

#endif
