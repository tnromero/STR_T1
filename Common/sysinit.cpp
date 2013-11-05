/* sysinit.cpp - system initialization routines */

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
#include "sysinit.h"
#include "kproject.h"
#include "rtxcwin.h"
#include <math.h>

#ifdef HAS_TIMER0_ISR /* { */

/* timer semaphore signaled every 1 ms */
static HANDLE timersema;

/*
   callback function called every 1 ms
*/
void CALLBACK InternalTimerProc(UINT id, UINT msg, DWORD user, DWORD dw1, DWORD dw2)
{
   ReleaseSemaphore(timersema, 1, NULL);
}

/*
   timer interrupt handler
*/
void timer0isrc(void)
{
   TIMECAPS tc;
   UINT timerres;
   UINT i, tickcount;
   static UINT timercount = 0;
   long maxlong;

   /* create timer semaphore */
   maxlong = (long)(pow((double)2, sizeof(long) * 8.0) / 2 - 1);
   timersema = CreateSemaphore(NULL, 0, maxlong, NULL);

   /* start timer */
   timeGetDevCaps(&tc, sizeof(TIMECAPS));
   timerres = min(max(tc.wPeriodMin, 1), tc.wPeriodMax);
   timeBeginPeriod(timerres);
   timeSetEvent(timerres, timerres, InternalTimerProc, (DWORD)0, TIME_PERIODIC);

   while(1)
   {
      /* wait for signal from timer semaphore */
      WaitForSingleObject(timersema, INFINITE);

      /* get number of ticks to process */
      tickcount = (timercount + timerres) / CLKTICK;
      timercount = (timercount + timerres) % CLKTICK;

      /* process ticks */
      for(i = 0; i < tickcount; i++)
      {
         IS_Begin();
         IS_ProcessEventSourceTick((EVNTSRC)0, 1);
         IS_End();
      }
   }
}

#endif /* } HAS_TIMER0_ISR */