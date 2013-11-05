/* rtxcuart.cpp - uart support */

/*
 *    RTXC Quadros Version 1.0
 *    Copyright (c) 1999-2003
 *    Quadros Systems, Inc.
 *    ALL RIGHTS RESERVED
 *
 *    THE INFORMATION HEREIN IS CONFIDENTIAL AND PROPRIETARY.
 *    UNAUTHORIZED DISCLOSURE OR DISTRIBUTION IS PROHIBITED.
*/

#include "rtxcapi.h"
#include "ksema.h"  
#include "kqueue.h"
#include "rtxcuart.h"
#include "rtxcwin.h"
#include <stdio.h>
#include <conio.h>

#ifdef HAS_UART0 /* { */

/* input char from console */
static char idata;

/*
   uart handler
*/
void uart0isrc(void)
{
   while(1)
   {
      /* read char from console */
      idata = _getch_nolock();

      /* signal console input task */
      IS_Begin();
      IS_SignalSema(CONAISEM);
      IS_End();
   }
}

/*
   console input task
*/
void conaitsk(void)
{
   for(;;)
   {
      /* wait on input char keystroke */
      KS_TestSemaW(CONAISEM);

      /* put entry into the queue */
      KS_PutQueueDataW(CONAIQ, &idata);
   }
}

/*
   console output task
*/
void conaotsk(void)
{
   char odata;

   /* gobble up any early triggers from init */
   while(KS_TestSema(CONAOSEM) == RC_GOOD)
   {
      ;
   }

   for(;;)
   {
      /* get next char from queue */
      KS_GetQueueDataW(CONAOQ, &odata);

      /* write char to console*/
      _putchar_nolock(odata);
   }
}

#endif /* } HAS_UART0 */