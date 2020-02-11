
#include <Arduino.h>
#include <Servo.h>

class Victor884
{
private:
  int pin;
  Servo hardware;
public:
  Victor884()
  {
  }
  /**
   * creates a motor on the required pin, assumes the pin is a valid pwm pin.
   * @param pin_p - the pin to add the motor to
   */
  Victor884(int pin_p)
  {
    pin = pin_p;
    hardware.attach(pin_p);
  }
  /**
   * runs the motor at a set speed
   *   - val must be between -1 and 1, otherwise it will be capped at those values
   *   - val must be a valid double number
   * @param val - the value for the motor to be run at. -1 is full reverse, 1 is full forward.
   */
  void run(double val)
  {
    int power = constrain(val, -1, 1);
    power = map(val, -1, 1, 0, 180);
    hardware.write(power);
  }
};
