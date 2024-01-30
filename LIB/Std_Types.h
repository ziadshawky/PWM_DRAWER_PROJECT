/*
 * Std_Types.h
 *
 *  Created on: 23 Jan 2024
 *      Author: ziad
 */

#ifndef LIB_STD_TYPES_H_
#define LIB_STD_TYPES_H_


/************************************************************************/
/*							Null Pointer                                */
/************************************************************************/
#define NULL_PTR	((void*)0)

/************************************************************************/
/*				Standard Types for Unsigned Integers                    */
/************************************************************************/
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
typedef unsigned long long uint64;

/************************************************************************/
/*				Standard Types for Signed Integers						*/
/************************************************************************/
typedef signed char sint8;
typedef signed short sint16;
typedef signed long sint32;
typedef signed long long sint64;

/************************************************************************/
/*				Standard Floating Point Numbers                         */
/************************************************************************/
typedef float float32;
typedef double float64;
typedef long double float80;

#endif /* LIB_STD_TYPES_H_ */
