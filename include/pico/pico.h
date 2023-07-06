// pico/pico.h - syntactic sugar API
#ifndef __PICO_PICO_H__
#define __PICO_PICO_H__

#include "pico/rtos.h"  // include first!

#ifdef __cplusplus
extern "C" {
#endif
  #include "pico/button.h"
  #include "pico/led.h"
  #include "pico/log.h"

  typedef PI_txt Txt;
  typedef PI_us Us;

  static inline void print(Txt fmt,...)
  {
    va_list ap;
	  va_start(ap,fmt); pi_vprint(fmt, ap);	va_end(ap);
  }

  static inline void sleep(Us us)
  {
    pi_sleep(us);
  }

  static inline Us us(void)  // get current us-clock time
  {
    return pi_us();
  }

  static inline int log(int lvl,Txt fmt,...)
  {
    va_list ap;  int err;
    va_start(ap,fmt); err = pi_vlog('#',lvl,fmt, ap); va_end(ap);
    return err;
  }

  static inline int hello(int lvl,Txt txt)
  {
    return pi_hello(lvl,txt);
  }

  static inline int led(int i, int val)
  {
    return pi_led(i,val);
  }

  static inline void button(void (*cb)(int i,int on))
  {
    pi_button(cb);
  }

  static inline int poll(int i)
  {
    return pi_poll(i);
  }
#ifdef __cplusplus
}
#endif
#endif // __PICO_PICO_H__
