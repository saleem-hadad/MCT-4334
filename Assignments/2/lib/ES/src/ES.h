#ifndef ES_h
#define ES_h

#include <Arduino.h>

using namespace std;

class Blinky
{
public:
  void initialize(char port, char pin, unsigned int onTime, unsigned int offTime);
  void refresh(void);

private:
  void setup(void);
  unsigned char * portDirection;
  unsigned char * portWriter;
  unsigned int onTime;
  unsigned int offTime;
  unsigned long previousTime=0;
  char pin;
};

#endif
