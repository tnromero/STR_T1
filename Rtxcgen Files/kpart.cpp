// kpart.cpp - RTXC Quadros Version 1.0.0 Partition definitions

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

#ifdef HAS_Partitions // {

#include "kpart.h"

// Begin - Revision Information, Top
// End - Revision Information, Top


#ifdef HAS_PartitionStaticNames // {
// Static Object Name Array
static const char partname[1 + NPARTS][PART_NAMMAX + 1] =
{
    ""   // 0 - Not Used
};
#endif // } HAS_PartitionStaticNames

// Class Properties
extern const KCLASSPROP partclassprop =
{
   ATTR_STATISTICS |
   ATTR_STATIC_NAMES | ATTR_DYNAMICS | ATTR_SEMAPHORES,
   NPARTS,
   DNPARTS,
   sizeof(PHEADER),
   ((NPARTS + DNPARTS) * sizeof(PHEADER)) + (DNPARTS * sizeof(NAMELIST)),

#ifdef HAS_PartitionStaticNames // {
   PART_NAMMAX,
   &partname[0][0]

#else
   0,
   (const char *)0
#endif // } HAS_PartitionStaticNames

};

// Begin - User Include Information
// End - User Include Information

// Partition Information


// Object Properties
extern const PARTPROP partprop[1 + NPARTS] =
{
    { 0, (char *)0, 0, 0 } // 0 - Not Used
};

// Begin - Revision Information, Bottom
// End - Revision Information, Bottom

#endif // } HAS_Partitions

// end of file - kpart.cpp
