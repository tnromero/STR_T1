// _Mov_Bola.cpp - Generated by VisualRTXC
// Autor: Thiago Neves Romero
// Autor: Rafael Edurado Wolf de Goes
// UFSCar - Universidade Federal de S�o Carlos

#include "kcounter.h"
#include "ktask.h"
#include "rtxcapi.h"
#include "kproject.h"
#include "objetos.h"
#include "graphics.h"
#include "Util.h"
#include <time.h>

extern circulo bola[5];
extern quadrilatero player1;
extern quadrilatero player2;
extern int scoreP1;
extern int scoreP2;
extern int velocidade;

void task__Mov_Bola(void);

void task__Mov_Bola(void)
{
	int *i;
	int incX, incY, direcaoInicial;
	
	// Instanciar Variaveis
	// Argumento da tarefa
	i= (int*) KS_GetTaskEnvArg (SELFTASK);
	
	// Movimentos da Bola
	srand( ((unsigned int)time(NULL)) + (*i * 874569));
	
	direcaoInicial = (rand()%2)==0?1:-1;
	incX=((rand()%3)+3)*direcaoInicial;
	incY=((rand()%3)+3)*direcaoInicial;
	
	// Inicializar Bola
	bola[*i].v.x=299;
	bola[*i].v.y=199;
	bola[*i].raio=10;
	bola[*i].fillcolor=WHITE;
	while(1)
	{
		// Movimentos de X
		if(incX>0)
		{
			// X -> Direita
			if(	(bola[*i].v.y+bola[*i].raio<=player2.v2.y && bola[*i].v.y-bola[*i].raio>=player2.v1.y) 
					&& (bola[*i].v.x+bola[*i].raio+incX>=player2.v1.x) ) {
				
				if(bola[*i].v.x+bola[*i].raio+incX==player2.v1.x) {
					bola[*i].v.x+=incX;
				} else {
					while(bola[*i].v.x+bola[*i].raio<player2.v1.x) {
						bola[*i].v.x++;
					}	
				}
				incX=-incX;
			
			}else if(bola[*i].v.x+bola[*i].raio+incX<594) {
				bola[*i].v.x+=incX;
				if(bola[*i].v.x+bola[*i].raio>585){
					scoreP1++;
					bola[*i].v.x=299;
					bola[*i].v.y=199;
					incX=-((rand()%3)+3);
					incY=((rand()%3)+3);
				}
			} else {
				while(bola[*i].v.x+bola[*i].raio<594-1) {
					bola[*i].v.x++;
					if(bola[*i].v.x+bola[*i].raio>585){
						scoreP1++;
						bola[*i].v.x=299;
						bola[*i].v.y=199;
						incX=-((rand()%3)+3);
						incY=((rand()%3)+3);
			
						break;
					}
				}
				incX=-incX;
			}
		}
		else
		{
			// X -> Esquerda
			if(	(bola[*i].v.y+bola[*i].raio<=player1.v2.y && bola[*i].v.y-bola[*i].raio>=player1.v1.y) 
						&& (bola[*i].v.x-bola[*i].raio+incX<=player1.v2.x) ) {
					
				if(bola[*i].v.x-bola[*i].raio+incX==player2.v2.x) {
					bola[*i].v.x+=incX;
				} else {
					while(bola[*i].v.x-bola[*i].raio>player2.v1.x) {
						bola[*i].v.x--;
					}	
				}
				incX=-incX;
			
			}else if(bola[*i].v.x-bola[*i].raio+incX>5) {
				bola[*i].v.x+=incX;
				if(bola[*i].v.x-bola[*i].raio<10){
					scoreP2++;
					bola[*i].v.x=299;
					bola[*i].v.y=199;
					incX=((rand()%3)+3);
					incY=((rand()%3)+3);
				}
			
			} else {
				while(bola[*i].v.x-bola[*i].raio>5+1) {
					bola[*i].v.x--;
					if(bola[*i].v.x-bola[*i].raio<10){
						scoreP2++;
						bola[*i].v.x=299;
						bola[*i].v.y=199;
						incX=((rand()%3)+3);
						incY=((rand()%3)+3);
						break;	
					}
				}
				incX=-incX;
			}
		}
		// Movimentos de Y
		if(incY>0)
		{
			// Y -> Cima
			if(bola[*i].v.y+bola[*i].raio+incY<INFERIOR) {
				bola[*i].v.y+=incY;
			} else {
				while(bola[*i].v.y+bola[*i].raio<INFERIOR-1) {
					bola[*i].v.y++;
				}
				incY=-incY;
			}
		}
		else
		{
			// Y -> Baixo
			if(bola[*i].v.y-bola[*i].raio+incY>TOPO) {
				bola[*i].v.y+=incY;
			} else {
				while(bola[*i].v.y-bola[*i].raio>TOPO+1) {
					bola[*i].v.y--;
				}
				incY=-incY;
			}
		}
		KS_SleepTask(SYSTIMER, (TICKS)(100-(velocidade*10))/CLKTICK);
	}
}