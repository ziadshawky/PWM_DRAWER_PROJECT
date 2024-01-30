/*
 * GPT_Pconfig.h
 *
 *  Created on: 23 Jan 2024
 *      Author: ziad
 */

#ifndef GPT_GPT_PCONFIG_H_
#define GPT_GPT_PCONFIG_H_

#define NUM_TIMERS_OPERATING				(1U)


/************************************************************************/
/*				Compiler Checks for Configurations                      */
/************************************************************************/
#if NUM_TIMERS_OPERATING > 3
	#pragma GCC error "There are only 3 timers in ATmega32A! Fix NUM_TIMERS_OPERATING to be of maximum 3."
#endif

#endif /* GPT_GPT_PCONFIG_H_ */
