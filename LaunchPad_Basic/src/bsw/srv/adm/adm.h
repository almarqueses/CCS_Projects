#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "hw_types.h"
#include "hw_memmap.h"
#include "gpio.h"
#include "adc.h"



uint32_t adm_sequencer [3] ;




void adm_Init(void);
void adm_getValue(void);
