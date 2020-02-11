#ifndef FlameSensor_H
#define FlameSensor_H

class FlameSensor
{
  public:
  FlameSensor();
  FlameSensor(int pin_p);

  boolean readFlame();
  
};
#endif
