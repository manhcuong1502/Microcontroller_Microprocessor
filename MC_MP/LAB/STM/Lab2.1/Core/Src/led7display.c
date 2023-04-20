/*
 * led7display.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Christian
 */
#include "led7display.h"
int led = 0;

uint16_t LED_OFF[] = {0x0380, 0x0340, 0x02C0, 0x01C0};

int LED_BUFFER[] = {1,2,3,0};

uint16_t LED7SEG_ON [] = {0x003F, 0x0006, 0x005B, 0x004F, 0x0066,
							0x006D,	0x007D, 0x0007, 0x007F, 0x006F};
uint16_t LED7SEG_OFF [] = {0x0040, 0X0079, 0x0024, 0x0030, 0x0019,
							0x0012, 0x0002, 0x000F, 0x0000, 0x0010};

int index_led = 0;
int led_buffer [4] = {1 , 2 , 3 , 4};

void led_7_seg_disp(int num)
{
	HAL_GPIO_WritePin(GPIOB, LED7SEG_ON[num], RESET);
	HAL_GPIO_WritePin(GPIOB, LED7SEG_OFF[num], SET);
}

void update7SEG (int index) {
	led_7_seg_disp(index);
	switch (index) {
		case 0:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET);
			HAL_GPIO_WritePin(GPIOA, LED_OFF[0], SET);
		break ;
		case 1:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
			HAL_GPIO_WritePin(GPIOA, LED_OFF[1], SET);
		break ;
		case 2:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
			HAL_GPIO_WritePin(GPIOA, LED_OFF[2], SET);
		break ;
		case 3:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
			HAL_GPIO_WritePin(GPIOA, LED_OFF[3], SET);

		break ;
		default :
		break ;
	}
}