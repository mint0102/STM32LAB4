/*
 * led.c
 *
 *  Created on: Dec 5, 2023
 *      Author: HaHuyen
 */

#include "main.h"
#include "led.h"

void blinkYellow(void) {
	HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
}

void blinkGreen(void) {
	HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
}

void blinkRed(void) {
	HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
}

void blinkAqua(void) {
	HAL_GPIO_TogglePin(LED_4_GPIO_Port, LED_4_Pin);
}

void blinkPink(void) {
	HAL_GPIO_TogglePin(LED_5_GPIO_Port, LED_5_Pin);
}


