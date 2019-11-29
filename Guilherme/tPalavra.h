#ifndef TPALAVRA_H_INCLUDED
#define TPALAVRA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    char letra;
} Tpalavra;

void inicializaPalavra(Tpalavra *pPalavra, int tam);
void insereLetra(Tpalavra *pPalavra, char Letra);
void removeLetra(Tpalavra *pPalavra, int posicao);
void imprimePalavra(Tpalavra *pPalavra, int tam);
int tamanho(Tpalavra *pPalavra);
char geraPalavraAleatoria(Tpalavra *pPalavra, int tam);

#endif // TPALAVRA_H_INCLUDED
