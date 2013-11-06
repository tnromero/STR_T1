// kexcptn.cpp - RTXC Quadros Version 1.0.0 Exception definitions

// This file was generated on 11/06/2013 21:55:37 -- RTXCgen v1.12 Build 411

/*
 *    RTXC Quadros Version 1.0.0
 *    Copyright (c) 1999-2013
 *    Quadros Systems, Inc.
 *    ALL RIGHTS RESERVED
 *
 *    THE INFORMATION HEREIN IS CONFIDENTIAL AND PROPRIETARY.
 *    UNAUTHORIZED DISCLOSURE OR DISTRIBUTION IS PROHIBITED.
*/

/*
 *            ** WARNING **
 *
 *    Do **NOT** Edit this File by Hand
 *
 *    It was computer-generated by RTXCgen from
 *    an Application specification file.
*/

//     Project Name: Pong
//         CPU Name: CPU name
// Application Name: Pong

#include "rtxcapi.h"

#ifdef HAS_Exceptions // {

#include "kexcptn.h"

// Begin - Revision Information, Top
// End - Revision Information, Top


#ifdef HAS_ExceptionStaticNames // {
// Static Object Name Array
static const char excptnname[1 + NEXCPTNS][EXCPTN_NAMMAX + 1] =
{
    ""   // 0 - Not Used
   ,"TMR0ISR"   // 1 - Timer 0 Interrupt Service Routine
   ,"UART0ISR"   // 2 - 
};
#endif // } HAS_ExceptionStaticNames

// Class Properties
extern const KCLASSPROP excptnclassprop =
{
   ATTR_STATISTICS |
   ATTR_STATIC_NAMES | ATTR_DYNAMICS,
   NEXCPTNS,
   DNEXCPTNS,
   sizeof(EHEADER),
   ((NEXCPTNS + DNEXCPTNS) * sizeof(EHEADER)) + (DNEXCPTNS * sizeof(NAMELIST)),

#ifdef HAS_ExceptionStaticNames // {
   EXCPTN_NAMMAX,
   &excptnname[0][0]

#else
   0,
   (const char *)0
#endif // } HAS_ExceptionStaticNames

};

// Begin - User Include Information
// End - User Include Information

// Exception Information

extern void excpt_TMR0ISR (void); // 1 TMR0ISR - Timer 0 Interrupt Service Routine
#define TMR0ISR_LEVEL 2 // Interrupt level
#define TMR0ISR_VECTOR 119 // Vector number

extern void excpt_UART0ISR (void); // 2 UART0ISR - 
#define UART0ISR_LEVEL 1 // Interrupt level
#define UART0ISR_VECTOR 77 // Vector number


// Object Properties
extern const EXCPTNPROP excptnprop[1 + NEXCPTNS] =
{
    { 0, 0, 0, 0 } // 0 - Not Used
   ,{ 0, TMR0ISR_LEVEL, TMR0ISR_VECTOR, excpt_TMR0ISR } // 1 TMR0ISR - Timer 0 Interrupt Service Routine
   ,{ 0, UART0ISR_LEVEL, UART0ISR_VECTOR, excpt_UART0ISR } // 2 UART0ISR - 
};

// Begin - Revision Information, Bottom
// End - Revision Information, Bottom

#endif // } HAS_Exceptions

// end of file - kexcptn.cpp
