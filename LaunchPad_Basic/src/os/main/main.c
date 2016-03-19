#include <../../../bsw/srv/srvm/srvm.h>
#include <../../../bsw/mcal/mcalm/mcalm.h>
#include "rom_map.h"

int main()
{
	/* MCAL Init	*/
	mcalm_Init();
	//SysCtlClockSet(SYSCTL_SYSDIV_8|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_OSC_MAIN);
    /*	SRV Init	*/
    srvm_Init();

    //initLCD();


	while(1) {
		printLCD("Tiva / Stellaris");
		setCursorPositionLCD(1,0);
		printLCD("LCD Display");
		SysCtlDelay(10000000);
		clearLCD();
		printLCD("16 characters");
		setCursorPositionLCD(1,0);
		printLCD("2 lines");
		SysCtlDelay(10000000);
		clearLCD();
	}
}
