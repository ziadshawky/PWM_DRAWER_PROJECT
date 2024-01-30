/*
 * Bit_Macros.h
 *
 *  Created on: 23 Jan 2024
 *      Author: ziad
 */

#ifndef LIB_BIT_MACROS_H_
#define LIB_BIT_MACROS_H_

#define SET_BIT(REG, BIT_NO)		(REG |= (1U<<(BIT_NO)))
#define CLEAR_BIT(REG, BIT_NO)		(REG &= (~(1U<<(BIT_NO))))
#define TOGGLE_BIT(REG, BIT_NO)		(REG ^= (1U<<(BIT_NO)))
#define READ_BIT(REG, BIT_NO)		((REG>>(BIT_NO)) & 1U)



#endif /* LIB_BIT_MACROS_H_ */
