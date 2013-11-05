/* sysinit.h - system initialization routines */

/*
 *    RTXC Quadros Version 1.0
 *    Copyright (c) 1999-2003
 *    Quadros Systems, Inc.
 *    ALL RIGHTS RESERVED
 *
 *    THE INFORMATION HEREIN IS CONFIDENTIAL AND PROPRIETARY.
 *    UNAUTHORIZED DISCLOSURE OR DISTRIBUTION IS PROHIBITED.
*/

#ifndef _SYSINIT_H /* { */
#define _SYSINIT_H

#define HAS_TIMER0_ISR

#ifdef HAS_TIMER0_ISR /* { */

void timer0isrc(void);

#endif /* } HAS_TIMER0_ISR */

#endif /* } _SYSINIT_H */

/* end of file - sysinit.h */
