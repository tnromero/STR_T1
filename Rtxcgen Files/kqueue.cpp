// kqueue.cpp - RTXC Quadros Version 1.0.0 Queue definitions

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

#ifdef HAS_Queues // {

#include "kqueue.h"

// Begin - Revision Information, Top
// End - Revision Information, Top


#ifdef HAS_QueueStaticNames // {
// Static Object Name Array
static const char queuename[1 + NQUEUES][QUEUE_NAMMAX + 1] =
{
    ""   // 0 - Not Used
   ,"CONAIQ"   // 1 - 
   ,"CONAOQ"   // 2 - 
};
#endif // } HAS_QueueStaticNames

// Class Properties
extern const KCLASSPROP queueclassprop =
{
   ATTR_STATISTICS |
   ATTR_STATIC_NAMES | ATTR_DYNAMICS | ATTR_SEMAPHORES,
   NQUEUES,
   DNQUEUES,
   sizeof(QHEADER),
   ((NQUEUES + DNQUEUES) * sizeof(QHEADER)) + (DNQUEUES * sizeof(NAMELIST)),

#ifdef HAS_QueueStaticNames // {
   QUEUE_NAMMAX,
   &queuename[0][0]

#else
   0,
   (const char *)0
#endif // } HAS_QueueStaticNames

};

// Begin - User Include Information
// End - User Include Information

// Queue Information

#define Q1WIDTH 1
#define Q1DEPTH 16
static char q1[Q1WIDTH * Q1DEPTH]; // 1 CONAIQ - 

#define Q2WIDTH 1
#define Q2DEPTH 256
static char q2[Q2WIDTH * Q2DEPTH]; // 2 CONAOQ - 


// Object Properties
extern const QUEUEPROP queueprop[1 + NQUEUES] =
{
    { 0, (char *)0, 0, 0 } // 0 - Not Used
   ,{ 0, &q1[0], Q1WIDTH, Q1DEPTH, 0 } // 1 CONAIQ - 
   ,{ 0, &q2[0], Q2WIDTH, Q2DEPTH, 0 } // 2 CONAOQ - 
};

// Begin - Revision Information, Bottom
// End - Revision Information, Bottom

#endif // } HAS_Queues

// end of file - kqueue.cpp
