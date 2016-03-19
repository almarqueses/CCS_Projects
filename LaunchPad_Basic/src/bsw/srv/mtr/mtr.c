#include "mtr.h"


void mtr_ahead(void){
	GPIOPinWrite(mtr_port, mtr_left_dir,mtr_left_dir);
	GPIOPinWrite(mtr_port, mtr_right_dir,~mtr_right_dir);
}


void mtr_back(void){
	GPIOPinWrite(mtr_port, mtr_left_dir,~mtr_left_dir);
	GPIOPinWrite(mtr_port, mtr_right_dir,mtr_right_dir);
}

void mtr_turn_left(void){

}

void mtr_turn_right(void){

}
