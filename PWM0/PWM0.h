//***************************************************************************
// Universidad del Valle de Guatemala
// IE2023: Programación de Microcontroladores
// Autor: Diego Cardona
// Hardware: ATMEGA328P
// Created: 16/04/2024
//***************************************************************************
// Post Lab 5
//***************************************************************************

#ifndef PWM0_H_
#define PWM0_H_

#include <avr/io.h>

#define NO_INVERTING	1
#define INVERTING		0


void PWM0_init(void);
void PWM0_dca(uint8_t dc, uint8_t modo);
void PWM0_dcb(uint8_t dc, uint8_t modo);

#endif /* PWM0_H_ */