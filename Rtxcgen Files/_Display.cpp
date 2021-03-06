// _Display.cpp - Generated by VisualRTXC
// Autor: Thiago Neves Romero
// Autor: Rafael Edurado Wolf de Goes
// UFSCar - Universidade Federal de S�o Carlos

#include "rtxcapi.h"
#include "kproject.h"
#include "objetos.h"
#include "graphics.h"
#include <stdio.h>

extern tabuleiro t;
extern quadrilatero player1;
extern quadrilatero player2;
extern circulo bola[5];
extern int scoreP1;
extern int scoreP2;
extern int qtdBola;
extern int velocidade;
extern int qtdPlayer;

void thrd__Display(void *ThreadArg, void *ThreadEnvArg);

void thrd__Display(void *ThreadArg, void *ThreadEnvArg)
{
	// Local Declarations
	char SscoreP1[3], SscoreP2[3];
	char SVelocidade[3], SQtdBola[3], SQtdPlayer[3];
	
	// Inicializacao
	setbkcolor(BLACK);
	cleardevice();
	
	// Score
	sprintf_s(SscoreP1, "%2d", scoreP1);
	sprintf_s(SscoreP2, "%2d", scoreP2);
	
	settextstyle(3, HORIZ_DIR, 1);
	
	setcolor(WHITE);
	outtextxy(10,425,"---------------------------");
	outtextxy(10,490,"---------------------------");
	outtextxy(10,410,"Score:");
	
	setcolor(player1.fillcolor);
	outtextxy(10,445,"Player 1:");
	outtextxy(150,445,SscoreP1);
	outtextxy(180,445,"( w / s )");
		
	setcolor(player2.fillcolor);
	outtextxy(10,470,"Player 2:");
	outtextxy(150,470,SscoreP2);
	outtextxy(180,470,"( i / k )");
	
	// Print Elementos
	sprintf_s(SQtdBola, "%2d", qtdBola);
	sprintf_s(SQtdPlayer, "%2d", qtdPlayer);
	sprintf_s(SVelocidade, "%2d", velocidade);
		
	settextstyle(3, HORIZ_DIR, 1);
	setcolor(WHITE);
	outtextxy(440,425,"------------------------");
	outtextxy(440,410,"Definicoes:");
	outtextxy(440,445,"Velocidade:");
	outtextxy(570,445,SVelocidade);
	outtextxy(440,470,"Bolas:");
	outtextxy(570,470,SQtdBola);
	outtextxy(440,495,"Players:");
	outtextxy(570,495,SQtdPlayer);
	

	// Cor tabuleiro
	setfillstyle(t.filltype, t.fillcolor);

	// Lados Tabuleiro
	for(int i=0;i<4;i++)
	{
		bar(	t.lado[i].v1.x, t.lado[i].v1.y,
				t.lado[i].v2.x, t.lado[i].v2.y);
		
	}
	// Player 1
	setfillstyle(player1.filltype, player1.fillcolor);
	bar(	player1.v1.x, player1.v1.y,
			player1.v2.x, player1.v2.y);
	
	// Player 2
	setfillstyle(player2.filltype, player2.fillcolor);
	bar(	player2.v1.x, player2.v1.y,
			player2.v2.x, player2.v2.y);
	
	// Bola
	for(int i=0; i<qtdBola; i++)
	{
		setcolor(bola[i].fillcolor);
		circle(bola[i].v.x, bola[i].v.y, bola[i].raio);
		floodfill(bola[i].v.x, bola[i].v.y, bola[i].fillcolor);
	}
	
}
