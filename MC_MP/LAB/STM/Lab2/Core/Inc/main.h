/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
/* USER CODE BEGIN Private defines */
#define DOT_PORT		GPIOA
#define DOT_PIN			GPIO_PIN_4
#define LED_BLINK_PORT 	GPIOA
#define LED_BLINK_PIN 	GPIO_PIN_5
#define EN0_PORT		GPIOA
#define EN0_PIN			GPIO_PIN_6
#define EN1_PORT		GPIOA
#define EN1_PIN			GPIO_PIN_7
#define EN2_PORT		GPIOA
#define EN2_PIN			GPIO_PIN_8
#define EN3_PORT		GPIOA
#define EN3_PIN			GPIO_PIN_9

#define COL_1_PIN		GPIO_PIN_1
#define COL_1_PORT 		GPIOA
#define COL_2_PIN		GPIO_PIN_2
#define COL_2_PORT 		GPIOA
#define COL_3_PIN		GPIO_PIN_10
#define COL_3_PORT 		GPIOA
#define COL_4_PIN		GPIO_PIN_11
#define COL_4_PORT 		GPIOA
#define COL_5_PIN		GPIO_PIN_12
#define COL_5_PORT 		GPIOA
#define COL_6_PIN		GPIO_PIN_13
#define COL_6_PORT 		GPIOA
#define COL_7_PIN		GPIO_PIN_14
#define COL_7_PORT 		GPIOA
#define COL_8_PIN		GPIO_PIN_15
#define COL_8_PORT 		GPIOA


#define ROW_1_PIN		GPIO_PIN_8
#define ROW_1_PORT		GPIOB
#define ROW_2_PIN		GPIO_PIN_9
#define ROW_2_PORT		GPIOB
#define ROW_3_PIN		GPIO_PIN_10
#define ROW_3_PORT		GPIOB
#define ROW_4_PIN		GPIO_PIN_11
#define ROW_4_PORT		GPIOB
#define ROW_5_PIN		GPIO_PIN_12
#define ROW_5_PORT		GPIOB
#define ROW_6_PIN		GPIO_PIN_13
#define ROW_6_PORT		GPIOB
#define ROW_7_PIN		GPIO_PIN_14
#define ROW_7_PORT		GPIOB
#define ROW_8_PIN		GPIO_PIN_15
#define ROW_8_PORT		GPIOB

#define SEG_A_1_PORT		GPIOB
#define SEG_A_1_PIN			GPIO_PIN_0
#define SEG_B_1_PORT		GPIOB
#define SEG_B_1_PIN			GPIO_PIN_1
#define SEG_C_1_PORT		GPIOB
#define SEG_C_1_PIN			GPIO_PIN_2
#define SEG_D_1_PORT		GPIOB
#define SEG_D_1_PIN			GPIO_PIN_3
#define SEG_E_1_PORT		GPIOB
#define SEG_E_1_PIN			GPIO_PIN_4
#define SEG_F_1_PORT		GPIOB
#define SEG_F_1_PIN			GPIO_PIN_5
#define SEG_G_1_PORT		GPIOB
#define SEG_G_1_PIN			GPIO_PIN_6


/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
