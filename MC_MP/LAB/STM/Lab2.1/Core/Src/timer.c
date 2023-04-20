/*
 * timer.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Christian
 */

#include "timer.h"

int counter = 0;
//int led = 0;

int counter0 = 0;
int counter1 = 0;
int timerflag0 = 0;
int timerflag1 = 0;

void timerRun_ex2()
{
	counter--;
	if(counter <= 0){
		counter = 50;
		led_7_seg_disp(LED_BUFFER[led]);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6 << led, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_OFF[led], SET);
		if (++led > 3) led = 0;
	}
}

void timerRun_ex3()
{
	counter--;
	if(counter <= 0){
		counter = 50;
		HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_9);
		update7SEG(led);
		if (++led > 3) led = 0;
	}
}

void settimer_ex4_0(int duration){
	counter0 = duration / 10;
	timerflag0 = 0;
}

void settimer_ex4_1(int duration){
	counter1 = duration / 10;
	timerflag1 = 0;
}

void timerRun_ex4()
{
	if (counter0 > 0){
		counter0--;
		if (counter0 == 0){
			timerflag0 = 1;
			counter0 = 0;
		}
	}
	if (counter1 > 0){
		counter1--;
		if (counter1 == 0){
			timerflag1 = 1;
			counter1 = 0;
		}
	}
}
