#ifndef FLAMESENSOR_H
#define FLAMESENSOR_H

class FlameSensor
{
  public:
  FlameSensor();
  FlameSensor(int pin_p);

  boolean readFlame();
  
};
#endif
