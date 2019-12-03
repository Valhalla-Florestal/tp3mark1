#include "Texto.h"

void inicializaTexto(Texto *texto)
{
    texto->palavras = (Palavra *)malloc(sizeof(Palavra));
    texto->tamanho = 0;
}

short inserePalavra(Texto *texto, Palavra palavra)
{
    texto->tamanho++;
    Palavra *newPalavras = (Palavra *)malloc(sizeof(Palavra) * texto->tamanho);
    for (int i = 0; i < texto->tamanho; i++)
    {
        newPalavras[i] = texto->palavras[i];
    }
    newPalavras[texto->tamanho - 1] = palavra;
    free(texto->palavras);
    texto->palavras = newPalavras;
}

short removePalavra(Texto *texto, Palavra tPalavra)
{
    texto->tamanho--;
    short modifier = 0;
    Palavra *newPalavras = (Palavra *)malloc(sizeof(Palavra) * texto->tamanho);
    for (int i = 0; i < texto->tamanho; i++)
    {
        if (strcmp(tPalavra.letras, texto->palavras[i].letras) == 0)
        {
            newPalavras[i] = texto->palavras[modifier + 1];
            continue;
        }
        newPalavras[modifier] = texto->palavras[i];
        modifier++;
    }
    free(texto->palavras);
    texto->palavras = newPalavras;
}

void imprimeTexto(Texto texto)
{
    for (int i = 0; i < texto.tamanho; i++)
    {
        imprimePalavra(texto.palavras[i]);
    }
}

int tamanhoTexto(Texto texto)
{
    return (texto.tamanho);
}

void ordenaPalavraSelecao(Palavra *tPalavra, int tamanho)
{
    int i, j, Min;
    Palavra aux;

    for (i = 0; i < tamanho - 1; i++)
    {
        Min = i;
        for (j = i + 1; j < tamanho; j++)
            if (tPalavra[j].chave < tPalavra[Min].chave)
                Min = j;
        aux = tPalavra[Min];
        tPalavra[Min] = tPalavra[i];
        tPalavra[i] = aux;
    }
}

void ordenaPalavraQuick(Palavra *tPalavra, int tamanho)
{
}
/*void Ordena(int Esq, int Dir, Item *A)
{
int i,j;
Particao(Esq, Dir, &i, &j, A);
if (Esq < j) Ordena(Esq, j, A);
if (i < Dir) Ordena(i, Dir, A);
}
void QuickSort(Item *A, int n)
{
Ordena(0, n-1, A);
}
void Particao(int Esq, int Dir,
int *i, int *j, Item *A){
Item pivo, aux;
*i = Esq; *j = Dir;
pivo = A[(*i + *j)/2]; /* obtem o pivo x 
do
{
while (pivo.Chave > A[*i].Chave) (*i)++;
while (pivo.Chave < A[*j].Chave) (*j)--;
if (*i <= *j)
{
aux = A[*i]; A[*i] = A[*j]; A[*j] = aux;
(*i)++; (*j)--;
}
} while (*i <= *j);
}
*/