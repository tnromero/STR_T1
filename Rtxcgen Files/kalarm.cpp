// kalarm.cpp - RTXC Quadros Version 1.0.0 Alarm definitions

// This file was generated on 11/03/2013 22:03:50 -- RTXCgen v1.12 Build 411

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

//     Project Name: Exemplo-modelo
//         CPU Name: CPU name
// Application Name: Application name

#include "rtxcapi.h"

#ifdef HAS_Alarms // {

#include "kcounter.h"
#include "kalarm.h"

// Begin - Revision Information, Top
// End - Revision Information, Top


#ifdef HAS_AlarmStaticNames // {
// Static Object Name Array
static const char alarmname[1 + NALARMS][ALARM_NAMMAX + 1] =
{
    ""   // 0 - Not Used
};
#endif // } HAS_AlarmStaticNames

// Class Properties
extern const KCLASSPROP alarmclassprop =
{
   ATTR_STATISTICS |
   ATTR_STATIC_NAMES | ATTR_DYNAMICS | ATTR_SEMAPHORES,
   NALARMS,
   DNALARMS,
   sizeof(ACHEADER),
   ((NALARMS + DNALARMS) * sizeof(ACHEADER)) + (DNALARMS * sizeof(NAMELIST)),

#ifdef HAS_AlarmStaticNames // {
   ALARM_NAMMAX,
   &alarmname[0][0]

#else
   0,
   (const char *)0
#endif // } HAS_AlarmStaticNames

};

// Begin - User Include Information
// End - User Include Information

// Object Properties
extern const ALARMPROP alarmprop[1 + NALARMS] =
{
    { 0, 0, 0, 0 } // 0 - Not Used
};

// Begin - Revision Information, Bottom
// End - Revision Information, Bottom

#endif // } HAS_Alarms

// end of file - kalarm.cpp
