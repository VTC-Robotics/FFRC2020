
#include <Arduino.h>
#include <Servo.h>

class Motor
{
private:
  int pin;
  Servo hardware;
public:
  Motor(int pin_p)
  {
    pin = pin_p;
    hardware.attach(pin_p);
  }
  void run(double val)
  {
    int power = constrain(val, -1, 1);
    power = map(val, -1, 1, 0, 180);
    hardware.write(power);
  }
};
