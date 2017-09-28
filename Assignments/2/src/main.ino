#include <ES.h>

Blinky leds[8];

void setup()
{
  leds[0].initialize('D', 2, 781, 515);
  leds[1].initialize('D', 3, 2014, 1348);
  leds[2].initialize('D', 4, 343, 573);
  leds[3].initialize('D', 5, 678, 1839);
  leds[4].initialize('D', 6, 342, 534);
  leds[5].initialize('B', 0, 1478, 326);
  leds[6].initialize('B', 1, 1859, 351);
  leds[7].initialize('B', 2, 777, 888);

  for (;;)
  {
    for (int i=0; i<8; i++)
    {
      leds[i].refresh();
    }
  }
}
