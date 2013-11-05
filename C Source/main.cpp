/* main.cpp - main module */

/*
 *   RTXC Quadros Version 1.0
 *   Copyright (c) 1999-2003
 *   Quadros Systems, Inc.
 *   ALL RIGHTS RESERVED
 *
 *   THE INFORMATION HEREIN IS CONFIDENTIAL AND PROPRIETARY.
 *   UNAUTHORIZED DISCLOSURE OR DISTRIBUTION IS PROHIBITED.
*/

#include "rtxcapi.h"
#include "sysinit.h"
#include "rtxcuart.h"
#include "rtxcstdio.h"
#include "kmutx.h"
#include "kqueue.h"
#include <tchar.h>

extern KSRC rtxcinit(void);
extern const TASK startls[];

volatile int brkflag = 0;

extern void excpt_UART0ISR(void);
extern void excpt_TMR0ISR(void);

/*
   timer interrupt service handler
*/
void isvcexcpt_TMR0ISR(void)
{
   excpt_TMR0ISR();
}

/*
   uart interrupt service handler
*/
void isvcexcpt_UART0ISR(void)
{
   excpt_UART0ISR();
}

/*
   main module
*/
int _tmain(int argc, _TCHAR* argv[])
{
   int i;

    /* initialize RTXC Quadros */
   if(rtxcinit() != RC_GOOD)
   {
      /* spin here - resolve error */
      for(;;)
      {
        ;
      }
   }

   /* Initialize input / output, (i.e. printf) */
   rtxc_stdio_init(CONAMUTX, CONAIQ, CONAOQ);

   /* start up tasks in startup list */
   for(i = 0; startls[i] != (TASK)0; i++)
   {
      KS_ExecuteTask(startls[i]);
   }

   /* loop forever (null task) */
   for(;;)
   {
      if(brkflag)
      {
         /* exit infinite loop - abort RTXC */
         break;
      }
 
      Sleep(100);
   }

   /*
      user supplied shutdown code should be inserted here
      typically, the null task never stops, but it may
      be aborted in some circumstances where it is desirable
      to stop multi-tasking
   */
   return 1;
}

/* end of file - main.cpp */
