// kmutx.cpp - RTXC Quadros Version 1.0.0 Mutex definitions

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

#ifdef HAS_Mutexes // {

#include "kmutx.h"

// Begin - Revision Information, Top
// End - Revision Information, Top


#ifdef HAS_MutexStaticNames // {
// Static Object Name Array
static const char mutxname[1 + NMUTXES][MUTX_NAMMAX + 1] =
{
    ""   // 0 - Not Used
   ,"CONAMUTX"   // 1 - 
   ,"POPPARAM"   // 2 - 
   ,"M_PLOTQ"   // 3 - 
   ,"M_P1"   // 4 - 
   ,"M_P2"   // 5 - 
};
#endif // } HAS_MutexStaticNames

// Class Properties
extern const KCLASSPROP mutxclassprop =
{
   ATTR_STATISTICS |
   ATTR_STATIC_NAMES | ATTR_DYNAMICS | ATTR_SEMAPHORES | ATTR_PRIORITY_INVERSION,
   NMUTXES,
   DNMUTXES,
   sizeof(UHEADER),
   ((NMUTXES + DNMUTXES) * sizeof(UHEADER)) + (DNMUTXES * sizeof(NAMELIST)),

#ifdef HAS_MutexStaticNames // {
   MUTX_NAMMAX,
   &mutxname[0][0]

#else
   0,
   (const char *)0
#endif // } HAS_MutexStaticNames

};

// Begin - User Include Information
// End - User Include Information

// Object Properties
extern const MUTXPROP mutxprop[1 + NMUTXES] =
{
    { 0 } // 0 - Not Used
   ,{ 0 | 0 } // 1 CONAMUTX - 
   ,{ 0 | 0 } // 2 POPPARAM - 
   ,{ 0 | ATTR_FIFO_ORDER } // 3 M_PLOTQ - 
   ,{ 0 | 0 } // 4 M_P1 - 
   ,{ 0 | 0 } // 5 M_P2 - 
};

// Begin - Revision Information, Bottom
// End - Revision Information, Bottom

#endif // } HAS_Mutexes

// end of file - kmutx.cpp
