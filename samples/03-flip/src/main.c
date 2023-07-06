// main.c - 03-flip
#include "pico/pico.h"

int main(void)
{
  hello(4,"");
  led(2,-1); led(3,-1);

	for (bool on=1; ; on=!on, sleep(500*1000)) {
    log(1,"%sLED flip",on?_G_:_M_);
    led(-1,-1);
  }
}
