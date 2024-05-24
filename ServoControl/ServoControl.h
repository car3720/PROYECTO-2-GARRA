//***************************************************************************
// Universidad del Valle de Guatemala
// IE2023: Programación de Microcontroladores
// Autor: Diego Cardona
// Hardware: ATMEGA328P
// Created: 16/04/2024
//***************************************************************************
// Post Lab 5
//***************************************************************************


#ifndef SERVOCONTROL_H_
#define SERVOCONTROL_H_

#include <avr/io.h>

void PWM_init(void);
void servo_writeA(float valADC);
void servo_writeB(float valADC);
void servo_writeC(float valADC);
float map(float x, float in_min, float in_max, float out_min, float out_max);


#endif /* SERVOCONTROL_H_ */