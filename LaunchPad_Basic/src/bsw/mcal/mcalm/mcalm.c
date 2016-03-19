#include "mcalm.h"



void mcalm_Init(void){

	/* System Clock	*/
    SysCtlClockSet(SYSCTL_SYSDIV_8|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_OSC_MAIN);

	/* Pin Configuration */
	pin_EnablePeripheralClocks();
	pin_LCD2x12();
	//pin_LCD_Nokia();
	//pin_Sensor_Optocoupled();
	//pin_Console();
	//pin_Usb();
	//pin_Motor();
	//pin_Led();
	//pin_Switch();
	//PortFunctionInit();
}
