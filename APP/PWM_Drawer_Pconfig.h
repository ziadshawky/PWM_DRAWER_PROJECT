/*
 * PWM_Drawer_Pconfig.h
 *
 *  Created on: 23 Jan 2024
 *      Author: ziad
 */

#ifndef APP_PWM_DRAWER_PCONFIG_H_
#define APP_PWM_DRAWER_PCONFIG_H_

#define GENERATE_PWM_FROM_SAME_MCU			(1U)	/* 1 if the same MCU is used to generate PWM signal and display it using GLCD, 0 otherwise */

#if GENERATE_PWM_FROM_SAME_MCU == 0
	/* If the different MCUs is used to generate PWM signal and display it using LCD */
	#define GLCD_MCU						(0U)		/* 1 if this is the MCU to display the signal using GLCD only, 0 if this is the MCU generating PWM only */
#endif



#endif /* APP_PWM_DRAWER_PCONFIG_H_ */
