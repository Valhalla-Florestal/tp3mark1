#include "tPalavra.h"

void inicializaPalavra(Tpalavra *pPalavra, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        pPalavra[i].letra = '0';
    } //fim for
} //fim inicializaPalavra

void imprimePalavra(Tpalavra *pPalavra, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf(" %c", pPalavra[i].letra);
    } //fim for
} //fim imprimePalavra

char geraPalavraAleatoria(Tpalavra *pPalavra, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        pPalavra[i].letra = 97 + (char)(rand() % 26);
    } //fim for
} //fim geraPalavraAleatoria
