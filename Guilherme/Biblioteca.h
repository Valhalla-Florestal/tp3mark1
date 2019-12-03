#include "Texto.h"

#ifndef BIBLIOTECA
#define BIBLIOTECA

typedef struct Biblioteca
{
    Texto *textos;
    int tamanho;
} Biblioteca;

void inicializaBiblioteca(Biblioteca *tBiblioteca);
short insereTexto(Biblioteca *tBiblioteca, Texto);
short removeTexto(Biblioteca *tBiblioteca, Texto);
int tamanhoBiblioteca(Biblioteca);

#endif // BIBLIOTECA