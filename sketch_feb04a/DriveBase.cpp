#include <Arduino.h>
#include "Victor884.h"

class DriveBase
{
  public:
  Victor884 front;
  Victor884 rear;
  Victor884 left;
  Victor884 right;
  DriveBase(){};
  /**
   * creates a full drive base capable of running the robot. 
   * for pins later defined as pwm pins, they must be valid arduino PWM pins
   * @param frontPin - the pwm pin for the front motor of the robot
   * @param rearPin - the pwm pin for the rear motor of the robot
   * @param leftPin - the pwm pin for the left motor of the robot 
   * @param rightPin - the pwm pin for the right the motor of the robot
   */
  DriveBase(int frontPin, int rearPin, int leftPin, int rightPin)
  {
    front = Victor884(frontPin);
    rear = Victor884(rearPin);
    left = Victor884(leftPin);
    right = Victor884(rightPin);
  }
  /**
   * assigns an encoder to a motor, a seperate function to avoid 12 parameters in constructor.
   * @param motorNumber - must be a number between 0 and 3 inclusive, corrolating to a motor. the front being motor 0, and going clockwise
   *                    - this would mean motor 0 is the front, motor 1 is the right, motor 2 is the rear, and motor 3 is the left
   * @param APin - the DI/O pin that is connected to the A output of the quadrature encoder
   * @param BPin - the DI/O pin that is connected to the B output of the quadrature encoder
   */
  void assignEncoder(int motorNumber, int APin, int BPin)
  {
    
  }
  /**
   * drives in a specified direction at a specified speed. 
   * @param xPower - must be a double between -1 and 1, otherwise it will be capped to those numbers
   *               - will drive the at (100*xPower)% speed to the right, with a negative value moving to the left that speed instead.
   * @param yPower - must be a double between -1 and 1, otherwise it will be capped to those numbers
   *               - will drive the at (100*yPower)% speed forward, with a negative value moving backwards that speed instead.
   */
  void driveDirection(double xPower, double yPower)
  {
    
  }
  /**
   * rotates the robot at a specified speed
   * @param rotPower - rotates the robot at this speed, constrained to the range -1 to 1
   */
  void driveRot(double rotPower)
  {
  
  }
  /**
  * needs to be called every loop, keeps encoders accurate, if not called every loop, could cause encoder incorrectness
  */
  void execute()
  {
  
  }
};
