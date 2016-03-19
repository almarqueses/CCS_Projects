

#include "hw_memmap.h"
#include "gpio.h"

#define rgb_port		GPIO_PORTF_BASE
#define rgb_led_red		GPIO_PIN_1
#define rgb_led_blue	GPIO_PIN_2
#define rgb_led_green	GPIO_PIN_3



void TurnON_Led_Blue (void);
void TurnOFF_Led_Blue (void);
void TurnON_Led_Red (void);
void TurnOFF_Led_Red (void);
void TurnON_Led_Green (void);
void TurnOFF_Led_Green (void);
