#ifndef LED_KEY_H
#define LED_KEY_H

#include "main.h"

typedef enum
{
  KEY_NONE = 0,
  KEY_1,
  KEY_2,
  KEY_3,
  KEY_4,

} KEYS;

#define KEY_WAIT_ALWAYS 0  // 一直等待按键事件

#ifdef LED_R_Pin
#define LED_R_ON() HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_RESET)
#define LED_R_OFF() HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_SET)
#define LED_R_TOGGLE() HAL_GPIO_TogglePin(LED_R_GPIO_Port, LED_R_Pin)
#endif

#ifdef LED_G_Pin
#define LED_G_ON() HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET)
#define LED_G_OFF() HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET)
#define LED_G_TOGGLE() HAL_GPIO_TogglePin(LED_G_GPIO_Port, LED_G_Pin)
#endif

#ifdef LED_B_Pin
#define LED_B_ON() HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET)
#define LED_B_OFF() HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_SET)
#define LED_B_TOGGLE() HAL_GPIO_TogglePin(LED_B_GPIO_Port, LED_B_Pin)
#endif

#ifdef Buzzer_Pin
#define Buzzer_ON()                                                            \
  HAL_GPIO_WritePin(Buzzer_GPIO_Port, Buzzer_Pin, GPIO_PIN_SET)
#define Buzzer_OFF()                                                           \
  HAL_GPIO_WritePin(Buzzer_GPIO_Port, Buzzer_Pin, GPIO_PIN_RESET)
#define Buzzer_TOGGLE() HAL_GPIO_TogglePin(Buzzer_GPIO_Port, Buzzer_Pin)
#endif

// 轮询方式读取按键状态
KEYS KEY_Scan(uint32_t timeout);


#endif /* LED_KEY_H */