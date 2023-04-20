/*
 * matrix_led.h
 *
 *  Created on: Oct 3, 2022
 *      Author: Christian
 */

#ifndef INC_MATRIX_LED_H_
#define INC_MATRIX_LED_H_

void setCol(uint8_t val);
void updateMatrix(uint8_t index, uint8_t shift);
void resetMatrix(void);
#endif /* INC_MATRIX_LED_H_ */
