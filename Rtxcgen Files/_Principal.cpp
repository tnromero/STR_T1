// _Principal.cpp - Generated by VisualRTXC
// Autor: Thiago Neves Romero
// Autor: Rafael Edurado Wolf de Goes
// UFSCar - Universidade Federal de S�o Carlos

#include "kcounter.h"
#include "kmutx.h"
#include "ktask.h"
#include "kthread.h"
#include "kpart.h"
#include "rtxcapi.h"
#include "kproject.h"
#include <stdlib.h>
#include <windows.h>
#include "objetos.h"
#include "graphics.h"
#include "Util.h"

// Declaracoes Globais

// Objetos
tabuleiro t;
quadrilatero player1;
quadrilatero player2;
circulo bola[5];

// Variaveis de controle
int indiceBola[5];
extern int qtdBola;
bool quit = false;
extern int velocidade;
extern int qtdPlayer;

// Score
int scoreP1 = 0;
int scoreP2 = 0;

// Declaracoes de tarefas dinamicas
extern const TASKPROP taskprop;
extern void task__Mov_Bola(void);
void task__Mov_Player1(void);
void task__Mov_Player2(void);

// Declaracao de flag para finalizar programa
extern volatile int brkflag;


void task__Principal(void);

void task__Principal(void)
{
	// Declaracoes Locais
	int GraphDriver = DETECT,GraphMode = 0;
	
	PRIORITY taskpri = 5;
	TASKPROP taskprop;
	ksize_t stacksize = 1024;
	TASK taskBola[5], taskPlayer1, taskPlayer2;
	char *pstackBola[5], *pstackP1, *pstackP2;
	
	// _Mov_Bola
	for(int i=0;i<qtdBola;i++) 
	{
		KS_OpenTask((char *)0, &taskBola[i]);
		pstackBola[i] = (char *)KS_AllocBlk(STKPART);
	
		taskprop.priority = taskpri;
		taskprop.stackbase = pstackBola[i];
		taskprop.stacksize = stacksize;
		taskprop.taskentry = task__Mov_Bola;
		
		KS_DefTaskProp (taskBola[i], &taskprop);
		/* Parametros argumento */
		indiceBola[i]=i;
		KS_DefTaskEnvArg (taskBola[i], &indiceBola[i]);
		KS_ExecuteTask (taskBola[i]);
	}
	// Player 1
	if(qtdPlayer<1)
	{
		// _Mov_Player1
		KS_OpenTask((char *)0, &taskPlayer1);
		pstackP1 = (char *)KS_AllocBlk(STKPART);
		
		taskprop.priority = taskpri;
		taskprop.stackbase = pstackP1;
		taskprop.stacksize = stacksize;
		taskprop.taskentry = task__Mov_Player1;
		
		KS_DefTaskProp (taskPlayer1, &taskprop);
		KS_ExecuteTask (taskPlayer1);
	}
	// Player 2
	if(qtdPlayer<2)
	{
		// _Mov_Player2
		KS_OpenTask((char *)0, &taskPlayer2);
		pstackP2 = (char *)KS_AllocBlk(STKPART);
		
		taskprop.priority = taskpri;
		taskprop.stackbase = pstackP2;
		taskprop.stacksize = stacksize;
		taskprop.taskentry = task__Mov_Player2;
		
		KS_DefTaskProp (taskPlayer2, &taskprop);
		KS_ExecuteTask (taskPlayer2);
	}
	// Ambiente grafico
	initgraph(&GraphDriver, &GraphMode, "", 607, 600);
	
	while(!quit)
	{
		// Checar STDIN
		if(kbhit())
		{
			// q - quit
			if(GetKeyState(81) & 0x8000)
			{
				quit = true;
			}
			// Player1
			if(qtdPlayer>0)
			{
				// w 87
				if(GetKeyState(87) & 0x8000)
				{
					KS_TestMutxW(M_P1);
					if(player1.v1.y-INC_PLAYER>TOPO)
					{
						player1.v1.y-=INC_PLAYER;
						player1.v2.y-=INC_PLAYER;
					}
					else
					{
						player1.v2.y-=(player1.v1.y-TOPO-1);
						player1.v1.y-=(player1.v1.y-TOPO-1);
					}
					KS_ReleaseMutx(M_P1);
				}
				// s 83
				if(GetKeyState(83) & 0x8000)
				{
					KS_TestMutxW(M_P1);
					if(player1.v2.y+INC_PLAYER<INFERIOR)
					{
						player1.v1.y+=INC_PLAYER;
						player1.v2.y+=INC_PLAYER;
					}
					else
					{
						player1.v1.y+=(INFERIOR - player1.v2.y -1);
						player1.v2.y+=(INFERIOR - player1.v2.y -1);
					}
					KS_ReleaseMutx(M_P1);
				}
			}
			// Player 2
			if(qtdPlayer>1)
			{
				// i 73
				if(GetKeyState(73) & 0x8000)
				{
					KS_TestMutxW(M_P2);
					if(player2.v1.y-INC_PLAYER>TOPO)
					{
						player2.v1.y-=INC_PLAYER;
						player2.v2.y-=INC_PLAYER;
					}
					else
					{
						player2.v2.y-=(player2.v1.y-TOPO-1);
						player2.v1.y-=(player2.v1.y-TOPO-1);
					}
					KS_ReleaseMutx(M_P2);
				}
				// k 75
				if(GetKeyState(75) & 0x8000)
				{
					KS_TestMutxW(M_P2);
					if(player2.v2.y+INC_PLAYER<INFERIOR)
					{
						player2.v1.y+=INC_PLAYER;
						player2.v2.y+=INC_PLAYER;
					}
					else
					{
						player2.v1.y+=(INFERIOR - player2.v2.y -1);
						player2.v2.y+=(INFERIOR - player2.v2.y -1);
					}
					KS_ReleaseMutx(M_P2);
				}
			}
		}
		KS_ScheduleThread(_Display);
		KS_SleepTask(SYSTIMER, (TICKS)100-(velocidade*10)/CLKTICK);
	}
	// Fechar Ambiente Grafico
	closegraph();
	
	// Finalizar Tarefas
	for (int i=0;i<qtdBola;i++)
	{
		KS_TerminateTask(taskBola[i]);
	}
	if(qtdPlayer<1)
	{
		KS_TerminateTask(taskPlayer1);
	}
	if(qtdPlayer<2)
	{
		KS_TerminateTask(taskPlayer2);
	}
	brkflag=1;
	KS_TerminateTask(SELFTASK);
}
