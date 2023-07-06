// main.c - 04-click
#include "pico/pico.h"

static void clicked(int i, int on)
{
  log(1,"%sclick: @%d,%d", on?_G_:_M_,i,on);
  if (on) led(i,-1);  // toggle LED @i
}

void main(void)
{
  hello(4,"click any button");
  button(clicked);  // init buttons and setup callback
}
