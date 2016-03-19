#include "lib.h"
#include "sysctl.h"
#include "hw_sysctl.h"
#include "tm4c123gh6pm.h"




void delayMS(int ms) {
    SysCtlDelay( (SysCtlClockGet()/(3*1000))*ms ) ;
}


unsigned long get_cpu_freq(void)
{
  char sysdiv,lsb;

  sysdiv = (SYSCTL_RCC2_R & 0x1F800000) >> 23;
  lsb    = (SYSCTL_RCC2_R &   0x400000) >> 22;

  return ((unsigned long)(400000000)/(2 * sysdiv + 1 + lsb));
}
