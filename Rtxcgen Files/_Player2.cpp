// _Player2.cpp - Generated by VisualRTXC
// Autor: Thiago Neves Romero
// Autor: Rafael Edurado Wolf de Goes
// UFSCar - Universidade Federal de S�o Carlos

#include "kmutx.h"
#include "ktask.h"
#include "rtxcapi.h"
#include "kproject.h"
#include "objetos.h"
#include "graphics.h"

// Declaracoes Globais
extern quadrilatero player2;

void task__Player2(void);

void task__Player2(void)
{
	KS_TestMutxW(M_P2);
	// Player 2
	player2.v1.x=579;
	player2.v1.y=125;
	player2.v2.x=593;
	player2.v2.y=274;
	player2.filltype=SOLID_FILL;
	player2.fillcolor=YELLOW;
	KS_ReleaseMutx(M_P2);
	KS_TerminateTask(SELFTASK);
}
