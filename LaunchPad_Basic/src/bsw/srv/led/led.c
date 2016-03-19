#include "led.h"





void TurnON_Led_Blue (void){
	GPIOPinWrite(rgb_port, rgb_led_blue,rgb_led_blue);

}

void TurnOFF_Led_Blue (void){
	GPIOPinWrite(rgb_port, rgb_led_blue,~rgb_led_blue);

}

void TurnON_Led_Red (void){
	GPIOPinWrite(rgb_port, rgb_led_red,rgb_led_red);

}

void TurnOFF_Led_Red (void){
	GPIOPinWrite(rgb_port, rgb_led_red,~rgb_led_red);

}

void TurnON_Led_Green (void){
	GPIOPinWrite(rgb_port, rgb_led_green,rgb_led_green);

}

void TurnOFF_Led_Green (void){
	GPIOPinWrite(rgb_port, rgb_led_green,~rgb_led_green);

}


