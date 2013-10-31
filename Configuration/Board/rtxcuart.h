/* rtxcuart.h - uart support */

/*
 *    RTXC Quadros Version 1.0
 *    Copyright (c) 1999-2003
 *    Quadros Systems, Inc.
 *    ALL RIGHTS RESERVED
 *
 *    THE INFORMATION HEREIN IS CONFIDENTIAL AND PROPRIETARY.
 *    UNAUTHORIZED DISCLOSURE OR DISTRIBUTION IS PROHIBITED.
*/

#ifndef _RTXCUART_H /* { */
#define _RTXCUART_H

#define HAS_UART0

#ifdef HAS_UART0 /* { */

void uart0isrc(void);
void conaitsk(void);
void conaotsk(void);

#endif /* } HAS_UART0 */

#endif /* } _RTXCUART_H */

/* end of file - sysinit.h */
