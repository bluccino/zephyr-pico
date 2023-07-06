// main.c - 02-nice
#include "pico/pico.h"

int main(void)
{
  PI_us time = 0;
  PI_txt color[] = {_G_,_M_,_Y_,_C_,""};

  hello(2,"let's go");  // log level 2 max

	for (int i=0;;i++,time+=500*1000) {
    sleep(time-us());
    log(i%5, "%shave a nice day!",color[i%5]);
  }
}
