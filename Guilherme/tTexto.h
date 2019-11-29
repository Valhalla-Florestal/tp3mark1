#ifndef TTEXTO_H_INCLUDED
#define TTEXTO_H_INCLUDED
#include "tPalavra.h"

typedef struct{
    Tpalavra pPalavra;
    int tam;
    char chave;
}tTexto;

void inicializaTexto(tTexto* pTexto, int tam);
void inserePalavra(tTexto* pTexto, Tpalavra* pPalavra);
void removePalavra(tTexto* pTexto, int posicao);
void imprimeTexto(tTexto* pTexto, int tam);
void ordenaSelecao(tTexto* pTexto,int qtsPalavra);
void ordenaQuickSort(tTexto* pTexto,int qtsPalavra);

#endif // TTEXTO_H_INCLUDED
