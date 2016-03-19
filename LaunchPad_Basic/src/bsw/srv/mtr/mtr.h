#include "hw_memmap.h"
#include "gpio.h"

#define mtr_port		GPIO_PORTB_BASE
#define mtr_left_dir	GPIO_PIN_4
#define mtr_left_pwm	GPIO_PIN_4
#define mtr_right_dir	GPIO_PIN_5
#define mtr_right_pwm	GPIO_PIN_5



void mtr_ahead(void);
void mtr_back(void);
void mtr_turn_left(void);
void mtr_turn_right(void);
