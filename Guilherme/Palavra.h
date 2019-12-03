#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#ifndef PALAVRA_H
#define PALAVRA_H

typedef struct Palavra
{
    char *letras;
    int tamanho;
    char chave;
} Palavra;

void inicializaPalavra(Palavra *tPalavra);
short insereLetra(Palavra *tPalavra, char letra);
short removeLetra(Palavra *tPalavra, char letra);
void imprimePalavra(Palavra);
int tamanhoPalavra(Palavra);
void ordenaPalavraSelecao(Palavra *tPalavra, int tamanho);
void ordenaPalavraQuick(Palavra *tPalavra, int tamanho);

#endif // PALAVRA_H