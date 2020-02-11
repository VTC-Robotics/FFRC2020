#ifndef VICTOR884_H
#define VICTOR884_H
#include <Servo.h>
class Victor884
{

  public:
  Victor884();
  Victor884(int pin_p);

  void run(double val);
};
#endif
