/*
 * PWM_Lconfig.c
 *
 *  Created on: 23 Jan 2024
 *      Author: ziad
 */


#include "PWM.h"

const PWM_ConfigurationType gaStrPWM_Config[NUM_OPERATING_PWM_CHANNELS] =
{
	{
		PWM_TIMER_0_CHANNEL,
		PWM_PHASE_CORRECT,
		PWM_PRESCALE_64,
		PWM_INVERTED,
		256U,
		4U,
		50U
	}
};

