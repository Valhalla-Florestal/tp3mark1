#include "Palavra.h"

#ifndef TEXTO
#define TEXTO

typedef struct Texto
{
    Palavra *palavras;
    int tamanho;
} Texto;

void inicializaTexto(Texto *tTexto);
short inserePalavra(Texto *tTexto, Palavra);
short removePalavra(Texto *tTexto, Palavra);
void imprimeTexto(Texto);
int tamanhoTexto(Texto);

#endif // TEXTO