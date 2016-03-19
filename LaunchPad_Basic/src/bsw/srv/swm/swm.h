

#include "hw_memmap.h"
#include "gpio.h"


#define sw_port				GPIO_PORTF_BASE
#define sw_left				GPIO_PIN_4
#define sw_right			GPIO_PIN_0
#define sw_port_ext_right	GPIO_PORTC_BASE
#define sw_port_ext_left	GPIO_PORTE_BASE
#define sw_right_ext			GPIO_PIN_5
#define sw_left_ext				GPIO_PIN_4



int32_t swm_read_sw_right(void);
int32_t swm_read_sw_left(void);
int32_t swm_read_sw_ext_right(void);
int32_t swm_read_sw_ext_left(void);
