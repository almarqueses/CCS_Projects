#include "swm.h"



int32_t swm_read_sw_right(void){

	return (GPIOPinRead(sw_port,sw_right));
}

int32_t swm_read_sw_left(void){

	return (GPIOPinRead(sw_port,sw_left));
}

int32_t swm_read_sw_ext_left(void){

	return (GPIOPinRead(sw_port_ext_left,sw_left_ext));
}

int32_t swm_read_sw_ext_right(void){

	return (GPIOPinRead(sw_port_ext_right,sw_right_ext));
}
