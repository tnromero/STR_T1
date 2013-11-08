// kproject.h - RTXC Quadros Version 1.0.0 Project Information

// This file was generated on 11/08/2013 10:58:59 -- RTXCgen v1.12 Build 411

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

#ifndef _KPROJECT_H // {
#define _KPROJECT_H

// Begin - Revision Information, Top
// End - Revision Information, Top

// Kernel Level Attributes
#define KERNEL_VERSION 0x00000100L // User (0) + Kernel version (1.0.0)

#define KERNEL_ATTR (    \
   K_ATTR_Level        | \
   K_ATTR_Thread       | \
   K_ATTR_Exception    | \
   K_ATTR_EventSource  | \
   K_ATTR_Counter      | \
   K_ATTR_Alarm        | \
   K_ATTR_Pipe         | \
   K_ATTR_Task         | \
   K_ATTR_Semaphore    | \
   K_ATTR_Queue        | \
   K_ATTR_Mailbox      | \
   K_ATTR_Partition    | \
   K_ATTR_Mutex        | \
   0 )

#define SYSRAMSIZE 4096 // System RAM Size

#define KSTACKSIZE 256 // Kernel Stack Size

#define CLKRATE 1000 // expressed in Hz
#define CLKTICK 1 // expressed in time (ms) per tick

// Begin - User Include Information
// End - User Include Information

// Begin - Revision Information, Bottom
// End - Revision Information, Bottom

#endif // } _KPROJECT_H

// end of file - kproject.h
