#ifndef DRIVEBASE_H
#define DRIVEBASE_H
#include "Victor884.h"
class DriveBase
{
  public:
  Victor884 front;
  Victor884 rear;
  Victor884 left;
  Victor884 right;
  DriveBase();
  DriveBase(int frontPin, int rearPin, int leftPin, int rightPin);
  void assignEncoder(int motorNumber, int APin, int BPin);
  void driveDirection(double xPower, double yPower);
  void driveRot(double rotPower);
  void execute();
}
#endif
