// kthread.cpp - RTXC Quadros Version 1.0.0 Thread definitions

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

#ifdef HAS_Threads // {

#include "klevel.h"
#include "kthread.h"

// Begin - Revision Information, Top
// End - Revision Information, Top


#ifdef HAS_ThreadStaticNames // {
// Static Object Name Array
static const char threadname[1 + NTHREADS][THREAD_NAMMAX + 1] =
{
    ""   // 0 - Not Used
   ,"_Display"   // 1 - 
};
#endif // } HAS_ThreadStaticNames

// Class Properties
extern const KCLASSPROP threadclassprop =
{
   ATTR_STATISTICS |
   ATTR_STATIC_NAMES | ATTR_GATES | ATTR_ARGUMENTS | ATTR_ENVIRONMENT_ARGUMENTS,
   NTHREADS,
   DNTHREADS,
   sizeof(TCHEADER),
   ((NTHREADS + DNTHREADS) * sizeof(TCHEADER)) + (DNTHREADS * sizeof(NAMELIST)),

#ifdef HAS_ThreadStaticNames // {
   THREAD_NAMMAX,
   &threadname[0][0]

#else
   0,
   (const char *)0
#endif // } HAS_ThreadStaticNames

};

// Begin - User Include Information
// End - User Include Information

// Thread Information

extern void thrd__Display(void *, void *);

// Object Properties
extern const THREADPROP threadprop[1 + NTHREADS] =
{
    { 0, 0, 0, (void (*) (void *, void *))0 } // 0 - Not Used
   ,{ 0, LEVEL1, 1, thrd__Display} // 1 _Display - 
};

// Begin - Revision Information, Bottom
// End - Revision Information, Bottom

#endif // } HAS_Threads

// end of file - kthread.cpp
