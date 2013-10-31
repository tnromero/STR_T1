#ifndef _OBJETOS_H_
#define _OBJETOS_H_

struct vertice
{
	int x;
	int y;
};

struct quadrilatero
{
	vertice v1; // Superior Esquerdo
	vertice v2;	// Inferior Direito
	float dirx;
	float diry;

	int width;
	int height;

	int filltype;
	int fillcolor;
};

struct tabuleiro 
{
	quadrilatero lado[4];
	int filltype;
	int fillcolor;
};

struct circulo {
	vertice v;
	int raio;
	int filltype;
	int fillcolor;
};

#endif