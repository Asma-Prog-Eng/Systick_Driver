/****************************************************
 * TON/OFF delay implementation
 * TON delay = 1s
 * TOFF delay = 2s
 * to toggle User LED3
 *****************************************************/

#include "stm32f4xx.h"

#include "Systick.h"

#include <stdio.h>

int main(void){


	 Systick_init();

	 GPIOD_init();

	while(1) {

		LED_toggle();

	}

}
