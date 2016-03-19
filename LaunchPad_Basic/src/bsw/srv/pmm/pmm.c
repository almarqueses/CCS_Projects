#include "pmm.h"



 uint32_t period = 5000; //20ms (16Mhz / 64pwm_divider / 50)
    uint32_t duty = 250;    //1.5ms pulse width



    void pmm_init (void){

   //Configure PWM Clock divide system clock by 64
   SysCtlPWMClockSet(SYSCTL_PWMDIV_64);

    //Configure PWM Options
    //PWM_GEN_2 Covers M1PWM4 and M1PWM5
    //PWM_GEN_3 Covers M1PWM6 and M1PWM7
    PWMGenConfigure(PWM0_BASE, PWM_GEN_0, PWM_GEN_MODE_DOWN | PWM_GEN_MODE_NO_SYNC);
    PWMGenConfigure(PWM0_BASE, PWM_GEN_2, PWM_GEN_MODE_DOWN | PWM_GEN_MODE_NO_SYNC);

    //Set the Period (expressed in clock ticks)
    PWMGenPeriodSet(PWM0_BASE, PWM_GEN_0, period);
    PWMGenPeriodSet(PWM0_BASE, PWM_GEN_2, period);

    //Set PWM duty
    PWMPulseWidthSet(PWM0_BASE, PWM_OUT_0,duty);
    PWMPulseWidthSet(PWM0_BASE, PWM_OUT_4,duty);

    // Enable the PWM generator
    PWMGenEnable(PWM0_BASE, PWM_GEN_2);
    PWMGenEnable(PWM0_BASE, PWM_GEN_3);

    // Turn on the Output pins
    PWMOutputState(PWM0_BASE, PWM_OUT_5_BIT | PWM_OUT_6_BIT | PWM_OUT_7_BIT, true);
    }
/*
    while(1)
    {
        delayMS(2000);

        //Drive servo to 135 degrees
        PWMPulseWidthSet(PWM1_BASE, PWM_OUT_5,duty+(duty/2));
        PWMPulseWidthSet(PWM1_BASE, PWM_OUT_6,duty+(duty/2));
        PWMPulseWidthSet(PWM1_BASE, PWM_OUT_7,duty+(duty/2));

        delayMS(2000);

        //Drive servo to 90 degrees
        PWMPulseWidthSet(PWM1_BASE, PWM_OUT_5,duty);
        PWMPulseWidthSet(PWM1_BASE, PWM_OUT_6,duty);
        PWMPulseWidthSet(PWM1_BASE, PWM_OUT_7,duty);

    }
*/
