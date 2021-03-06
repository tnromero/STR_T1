// _Mov_Player2.cpp - Generated by VisualRTXC
// Autor: Thiago Neves Romero
// Autor: Rafael Edurado Wolf de Goes
// UFSCar - Universidade Federal de S�o Carlos

#include "kcounter.h"
#include "kmutx.h"
#include "ktask.h"
#include "rtxcapi.h"
#include "kproject.h"
#include "objetos.h"
#include "Util.h"

extern circulo bola[5];
extern quadrilatero player2;
extern int qtdBola;
extern int velocidade;

void task__Mov_Player2(void);

void task__Mov_Player2(void)
{
	int indBola=0;
	
	while(1)
	{
		// Bola mais proxima
		for(int i=0;i<qtdBola;i++)
		{
			if(bola[i].v.x>bola[indBola].v.x)
			{
				indBola=i;
			}
		}
		// Subir player 2
		if(bola[indBola].v.y-bola[indBola].raio<player2.v1.y)
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
		else
		{
			// Descer player 2
			if(bola[indBola].v.y+bola[indBola].raio>player2.v2.y)
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
		KS_SleepTask(SYSTIMER, (TICKS)100-(velocidade*10)/CLKTICK);
	}
}
