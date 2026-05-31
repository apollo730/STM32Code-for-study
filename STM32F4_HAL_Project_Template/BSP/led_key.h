/**
 * @file    led_key.h
 * @author  apollo730
 * @brief   This file contain the common defines and functions prototypes for led_key.c,functions about led ,key and buzzer.
 * Wating for key event and control led and buzzer.
 * 
 */
#ifndef LED_KEY_H
#define LED_KEY_H

#include "main.h"

/** @brief   按键类型枚举
 */
typedef enum
{
  KEY_NONE = 0, ///< 无按键事件
  KEY_1,///< 按键1事件
  KEY_2,///< 按键2事件
  KEY_3,///< 按键3事件
  KEY_4,///< 按键4事件
} KEYS;


/** @brief   按键等待宏定义
 * @version 1.0.0
 * @author  apollo730
 * @date    2026-05-31
 */
#define KEY_WAIT_ALWAYS 0  // 一直等待按键事件

/** @brief   LED_R控制宏定义
 * @version 1.0.0
 * @author  apollo730
 * @date    2026-05-31
 */
#ifdef LED_R_Pin
#define LED_R_ON() HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_RESET)
#define LED_R_OFF() HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_SET)
#define LED_R_TOGGLE() HAL_GPIO_TogglePin(LED_R_GPIO_Port, LED_R_Pin)
#endif

/**
 * @brief   LED_G控制宏定义
 * @version 1.0.0
 * @author  apollo730
 * @date    2026-05-31
 */
#ifdef LED_G_Pin
#define LED_G_ON() HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET)
#define LED_G_OFF() HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET)
#define LED_G_TOGGLE() HAL_GPIO_TogglePin(LED_G_GPIO_Port, LED_G_Pin)
#endif

/**
 * @brief   LED_B控制宏定义
 * @version 1.0.0
 * @author  apollo730
 * @date    2026-05-31
 */
#ifdef LED_B_Pin
#define LED_B_ON() HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET)
#define LED_B_OFF() HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_SET)
#define LED_B_TOGGLE() HAL_GPIO_TogglePin(LED_B_GPIO_Port, LED_B_Pin)
#endif

/**
 * @brief   蜂鸣器控制宏定义
 * @version 1.0.0
 * @author  apollo730
 * @date    2026-05-31
 */
#ifdef Buzzer_Pin
#define Buzzer_ON()                                                            \
  HAL_GPIO_WritePin(Buzzer_GPIO_Port, Buzzer_Pin, GPIO_PIN_SET)
#define Buzzer_OFF()                                                           \
  HAL_GPIO_WritePin(Buzzer_GPIO_Port, Buzzer_Pin, GPIO_PIN_RESET)
#define Buzzer_TOGGLE() HAL_GPIO_TogglePin(Buzzer_GPIO_Port, Buzzer_Pin)
#endif


/**
 * @brief   轮询方式读取按键状态
 * @param   timeout 
 * @return  KEYS 
 * @version 1.0.0
 * @author  apollo730
 * @date    2026-05-31
 */
KEYS KEY_Scan(uint32_t timeout);


#endif /* LED_KEY_H */