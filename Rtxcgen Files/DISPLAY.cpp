// DISPLAY.cpp - Generated by VisualRTXC

#include "rtxcapi.h"
#include "kproject.h"
#include "objetos.h"
#include "graphics.h"
#include <stdio.h>

extern tabuleiro t;
extern quadrilatero player1;
extern quadrilatero player2;
extern circulo bola;
extern int scoreP1;
extern int scoreP2;
char SscoreP1[3];
char SscoreP2[3];

void thrd_DISPLAY(void *ThreadArg, void *ThreadEnvArg);

void thrd_DISPLAY(void *ThreadArg, void *ThreadEnvArg)
{
	//static int i = 0;
	setbkcolor(BLACK);
	cleardevice();
	
	// Score
	sprintf_s(SscoreP1, "%2d", scoreP1);
	sprintf_s(SscoreP2, "%2d", scoreP2);
	
	settextstyle(10, HORIZ_DIR, 2);
	setcolor(WHITE);
	outtextxy(10,450,"Score:");
	outtextxy(10,470,"---------------");
	
	setcolor(player1.fillcolor);
	outtextxy(10,500,"Player 1:");
	outtextxy(150,500,SscoreP1);
	
	setcolor(player2.fillcolor);
	outtextxy(10,530,"Player 2:");
	outtextxy(150,530,SscoreP2);

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
	setcolor(bola.fillcolor);
	circle(bola.v.x, bola.v.y, bola.raio);
	floodfill(bola.v.x, bola.v.y, bola.fillcolor);
	
}
