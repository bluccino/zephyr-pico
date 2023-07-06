// main.c - 05-pico (use all 8 Pico functions)
#include "pico/pico.h"

static PI_txt txt[] = {"red","green","blue"};
static PI_txt col[] = {_R_, _G_, _B_};
static int index[]  = {0,1, 1,2, 2,0, 0,1,2};
static int mode = 3;

static void pressed(int i, int on)
{
  if (!log(2,"")) {
    print("button states:");
    for (int i=1; i <= 4; i++) {
      int state = poll(i);
      print(" %0d",state);
    }
    print("\n");
  }
  if (on && i == 1) mode = (mode+1) % 4;
    else if (on) mode = (i-2) % 4;
}

void main(void)
{
  for(; log(0,NULL); sleep(250*1000))
    led(1,-1);  // blink until console ready

  hello(4,"");  // verbose level, hello msg
  button(pressed);  // init/setup button cb

  PI_us time = 0;
	for (int i=0;; i++, time += 500*1000)
  {
    sleep(time-us());
    int k = index[2*mode + i % (mode==3?3:2)];
    log(1,"%s%s",col[k],txt[k]);
    led(-1,0);   // all LEDs off
    led(2+k,1);  // one LED on
  }
}
