/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
#define BUTTON_0_Pin GPIO_PIN_0
#define BUTTON_0_GPIO_Port GPIOB
#define BUTTON_1_Pin GPIO_PIN_1
#define BUTTON_1_GPIO_Port GPIOB
#define BUTTON_2_Pin GPIO_PIN_2
#define BUTTON_2_GPIO_Port GPIOB
#define TRAFFIC0_GREEN_Pin GPIO_PIN_10
#define TRAFFIC0_GREEN_GPIO_Port GPIOB
#define TRAFFIC1_RED_Pin GPIO_PIN_11
#define TRAFFIC1_RED_GPIO_Port GPIOB
#define TRAFFIC1_AMBER_Pin GPIO_PIN_12
#define TRAFFIC1_AMBER_GPIO_Port GPIOB
#define TRAFFIC1_GREEN_Pin GPIO_PIN_13
#define TRAFFIC1_GREEN_GPIO_Port GPIOB
#define LED7SEG_A_Pin GPIO_PIN_8
#define LED7SEG_A_GPIO_Port GPIOA
#define LED7SEG_B_Pin GPIO_PIN_9
#define LED7SEG_B_GPIO_Port GPIOA
#define LED7SEG_C_Pin GPIO_PIN_10
#define LED7SEG_C_GPIO_Port GPIOA
#define LED7SEG_D_Pin GPIO_PIN_11
#define LED7SEG_D_GPIO_Port GPIOA
#define LED7SEG_E_Pin GPIO_PIN_12
#define LED7SEG_E_GPIO_Port GPIOA
#define LED7SEG_F_Pin GPIO_PIN_13
#define LED7SEG_F_GPIO_Port GPIOA
#define LED7SEG_G_Pin GPIO_PIN_14
#define LED7SEG_G_GPIO_Port GPIOA
#define LED7SEG_DP_Pin GPIO_PIN_15
#define LED7SEG_DP_GPIO_Port GPIOA
#define BUTTON_3_Pin GPIO_PIN_3
#define BUTTON_3_GPIO_Port GPIOB
#define LED7SEG_0_Pin GPIO_PIN_4
#define LED7SEG_0_GPIO_Port GPIOB
#define LED7SEG_1_Pin GPIO_PIN_5
#define LED7SEG_1_GPIO_Port GPIOB
#define LED7SEG_2_Pin GPIO_PIN_6
#define LED7SEG_2_GPIO_Port GPIOB
#define LED7SEG_3_Pin GPIO_PIN_7
#define LED7SEG_3_GPIO_Port GPIOB
#define TRAFFIC0_RED_Pin GPIO_PIN_8
#define TRAFFIC0_RED_GPIO_Port GPIOB
#define TRAFFIC0_AMBER_Pin GPIO_PIN_9
#define TRAFFIC0_AMBER_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
