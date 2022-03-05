#ifndef _2_ACT_H_
#define _2_ACT_H_
#include <avr/io.h>
/**
 * @brief A function to initialise the analog to digital converter
 * 
 */
void Init_ADC();

/**
 * @brief A function to receive temperature sensor inputs from analog pin and output it to a register ADC which has 2 8 bit registers ADCL and ADCH.
 * 
 * 
 * @return uint16_t 
 */
uint16_t Read_ADC(uint8_t ch);




#endif
