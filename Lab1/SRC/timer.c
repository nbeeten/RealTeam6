/*
 * timer.c
 *
 *  Created on: Jan 23, 2017
 *      Author: nbeeten
 */

#include "main.h"
#include <avr/interrupt.h>

unsigned long timerCnt = 0;


ISR(TIMER1_OVF_vect){
	timerCnt++;
}

unsigned long getTimerCnt(){
	return timerCnt;
}
/**
 * @brief Initializes the specified timer in the specified mode. This
 * header file provides constants for NORMAL operation mode and
 * CTC operation mode, however there are many more modes of operation
 * for the Timers that can be experimented with.
 *
 * @param timer The number of the timer to be initialized (0-2).
 * @param mode The mode to initialize the specified timer in.
 * @param comp Only used in CTC mode. The value that the
 * timer counts to before it triggers an interrupt and resets.
 *
 * @todo Create a switch to initialize different timers
 *
 */
void initTimer(int timer, int mode, unsigned int comp){
	TCCR1A = 0b00000000;
	TCCR1B = 0b01000101;
}

/**
 * @brief Only used when the specified timer is in CTC mode. Changes
 * the value of the comparison register to the new specified value.
 *
 * @param timer The timer comparison value to change (0-2).
 * @param comp The value to set the comparison register to.
 *
 * @todo Create a function that will set a new compare value for the given timer.
 */
void setCompValue(unsigned char timer, unsigned short int comp){

}
