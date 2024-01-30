/*
 * GPT_Lconfig.c
 *
 *  Created on: 23 Jan 2024
 *      Author: ziad
 */

#include "GPT.h"
const GPT_ConfigurationType gaStrGPT_Config[NUM_TIMERS_OPERATING] =
{
	{
		GPT_TIMER_2,
		GPT_CTC_MODE,
		GPT_PRESCALE_8,
		GPT_INTERRUPT_DISABLED
	}
};


