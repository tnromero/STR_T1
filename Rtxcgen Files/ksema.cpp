// ksema.cpp - RTXC Quadros Version 1.0.0 Semaphore definitions

// This file was generated on 11/08/2013 20:39:15 -- RTXCgen v1.12 Build 411

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

#ifdef HAS_Semaphores // {

#include "ksema.h"

// Begin - Revision Information, Top
// End - Revision Information, Top


#ifdef HAS_SemaphoreStaticNames // {
// Static Object Name Array
static const char semaname[1 + NSEMAS][SEMA_NAMMAX + 1] =
{
    ""   // 0 - Not Used
   ,"CONAOSEM"   // 1 - 
   ,"CONAISEM"   // 2 - 
};
#endif // } HAS_SemaphoreStaticNames

// Class Properties
extern const KCLASSPROP semaclassprop =
{
   ATTR_STATISTICS |
   ATTR_STATIC_NAMES | ATTR_DYNAMICS,
   NSEMAS,
   DNSEMAS,
   sizeof(SHEADER),
   ((NSEMAS + DNSEMAS) * sizeof(SHEADER)) + (DNSEMAS * sizeof(NAMELIST)),

#ifdef HAS_SemaphoreStaticNames // {
   SEMA_NAMMAX,
   &semaname[0][0]

#else
   0,
   (const char *)0
#endif // } HAS_SemaphoreStaticNames

};

// Begin - User Include Information
// End - User Include Information

// Object Properties
extern const SEMAPROP semaprop[1 + NSEMAS] =
{
    { 0 } // 0 - Not Used
   ,{ 0 | 0 } // 1 CONAOSEM - 
   ,{ 0 | 0 } // 2 CONAISEM - 
};

// Begin - Revision Information, Bottom
// End - Revision Information, Bottom

#endif // } HAS_Semaphores

// end of file - ksema.cpp
