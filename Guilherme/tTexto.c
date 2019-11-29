#include "tTexto.h"

void inicializaTexto(tTexto *pTexto, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        pTexto[i].pPalavra = '0';
        pTexto[i].chave = '0';
        pTexto[i].tam = rand() % 5;
    } //fim for
} //fim inicializa

void inserePalavra(tTexto *pTexto, Tpalavra *pPalavra)
{

} //fim insere

void removePalavra(tTexto *pTexto, int posicao);

void imprimeTexto(tTexto *pTexto, int tam);

void geraTextoAleatorio(tTexto *pTexto, Tpalavra *pPalavra, int qtsPalavra)
{
    int aux;
    char aux[qtsPalavra];
    for (int i = 0; i < qtsPalavra; i++)
    {
        aux[i] = pPalavra[i];
    }

    for (int i = 0; i < qtsPalavra; i++)
    {
        aux = pTexto[i].tam;
        pTexto[i] = geraPalavraAleatoria(&pPalavra, aux);
    } //fim for
} //fim geraTextoAleatorio

void ordenaSelecao(tTexto *pTexto, int qtsPalavra);

void ordenaQuickSort(tTexto *pTexto, int qtsPalavra);
