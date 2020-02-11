#include <Arduino.h>
class Encoder
{
  private:

  public:
  Encoder(){}
  /**
   * creates an encoder to be used to track position of an axle
   * @param pinA - the pin for the A output of the encoder, will be a valid DI/O pin
   * @param pinA - the pin for the B output of the encoder, will be a valid DI/O pin
   */
  Encoder(int pinA, int pinB)
  {
    
  }
  /**
   * gets the number of ticks that the encoder has counted, with higher numbers being further forwards and negative numbers being furher backwards
   */
  int readRawVal()
  {
    
  }
};
