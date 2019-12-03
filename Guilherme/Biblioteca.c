#include "Biblioteca.h"

void inicializaBiblioteca(Biblioteca *biblioteca)
{
    biblioteca->textos = (Texto *)malloc(sizeof(Texto));
    biblioteca->tamanho = 0;
}

short insereTexto(Biblioteca *biblioteca, Texto texto)
{
    biblioteca->tamanho++;
    Texto *newTextos = (Texto *)malloc(sizeof(Texto) * biblioteca->tamanho);
    for (int i = 0; i < biblioteca->tamanho; i++)
    {
        newTextos[i] = biblioteca->textos[i];
    }
    newTextos[biblioteca->tamanho - 1] = texto;
    free(biblioteca->textos);
    biblioteca->textos = newTextos;
}

// remove Texto

int tamanhoBiblioteca(Biblioteca biblioteca)
{
    return (biblioteca.tamanho);
}