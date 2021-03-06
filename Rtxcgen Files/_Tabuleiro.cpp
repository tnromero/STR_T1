// _Tabuleiro.cpp - Generated by VisualRTXC
// Autor: Thiago Neves Romero
// Autor: Rafael Edurado Wolf de Goes
// UFSCar - Universidade Federal de S�o Carlos

#include "ktask.h"
#include "rtxcapi.h"
#include "kproject.h"
#include "objetos.h"
#include "graphics.h"
#include "Util.h"

// Declaracoes Globais
extern tabuleiro t;

void task__Tabuleiro(void);

void task__Tabuleiro(void)
{
	// Cores
	t.filltype=SOLID_FILL;
	t.fillcolor=WHITE;
	
	// Esquerda
	t.lado[0].v1.x=EXT_ESQUERDA;
	t.lado[0].v1.y=EXT_TOPO;
	t.lado[0].v2.x=ESQUERDA;
	t.lado[0].v2.y=EXT_INFERIOR;
	
	// Topo
	t.lado[1].v1.x=EXT_ESQUERDA;
	t.lado[1].v1.y=EXT_TOPO;
	t.lado[1].v2.x=EXT_DIREITA;
	t.lado[1].v2.y=TOPO;
	
	// Direita
	t.lado[2].v1.x=DIREITA;
	t.lado[2].v1.y=EXT_TOPO;
	t.lado[2].v2.x=EXT_DIREITA;
	t.lado[2].v2.y=EXT_INFERIOR;
	
	// Inferior
	t.lado[3].v1.x=EXT_ESQUERDA;
	t.lado[3].v1.y=INFERIOR;
	t.lado[3].v2.x=EXT_DIREITA;
	t.lado[3].v2.y=EXT_INFERIOR;
	
	KS_TerminateTask(SELFTASK);
}
