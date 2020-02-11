#include <Arduino.h>
#include "Victor884.h"

class DriveBase
{
  public:
  Motor front;
  Motor rear;
  Motor left;
  Motor right;

  DriveBase(int frontPin, int rearPin, int leftPin, int rightPin)
  {
    front = Motor(frontPin);
    rear = Motor(rearPin);
    left = Motor(leftPin);
    right = Motor(rightPin);
    front.run(1);
  }
};
