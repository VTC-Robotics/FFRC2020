#include <Arduino.h>
class FlameSensor
{
  private:
  int pin;



  public:
  flameSensor()
  {
    
  }
  /**
   * Sets up the flame sensor on the required pin, assumes the pin is a valid pin
   * @param pin_p - the pin to set the sensor to
   */
  flameSensor(int pin_p)
  {
    pin = pin_p;
  }
  /**
   * reads the value from the flame sensor to determine if the flame is nearby
   * 
   */
  boolean readFlame()
  {
    
  }
  
};
