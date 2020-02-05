#ifndef VICTOR884_H
#define VICTOR884_H
#include <Servo.h>
class Motor
{

  public:
  Motor(int pin_p);

  void run(double val);
};
#endif
