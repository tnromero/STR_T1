// kpipe.cpp - RTXC Quadros Version 1.0.0 Pipe definitions

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

#ifdef HAS_Pipes // {

#include "kpipe.h"

// Begin - Revision Information, Top
// End - Revision Information, Top


#ifdef HAS_PipeStaticNames // {
// Static Object Name Array
static const char pipename[1 + NPIPES][PIPE_NAMMAX + 1] =
{
    ""   // 0 - Not Used
};
#endif // } HAS_PipeStaticNames

// Class Properties
extern const KCLASSPROP pipeclassprop =
{
   ATTR_STATISTICS |
   ATTR_STATIC_NAMES | ATTR_DYNAMICS,
   NPIPES,
   DNPIPES,
   sizeof(PCHEADER),
   ((NPIPES + DNPIPES) * sizeof(PCHEADER)) + (DNPIPES * sizeof(NAMELIST)),

#ifdef HAS_PipeStaticNames // {
   PIPE_NAMMAX,
   &pipename[0][0]

#else
   0,
   (const char *)0
#endif // } HAS_PipeStaticNames

};

// Begin - User Include Information
// End - User Include Information

// Pipe Information


// Object Properties
extern const PIPEPROP pipeprop[1 + NPIPES] =
{
    { 0, 0 } // 0 - Not Used
};

// Begin - Revision Information, Bottom
// End - Revision Information, Bottom

#endif // } HAS_Pipes

// end of file - kpipe.cpp
