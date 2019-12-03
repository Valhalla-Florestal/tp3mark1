#include "Palavra.h"

void inicializaPalavra(Palavra *palavra)
{
    palavra->letras = (char *)malloc(sizeof(char));
    palavra->tamanho = 0;
}

short insereLetra(Palavra *tPalavra, char letra)
{
    tPalavra->tamanho++;
    char *newLetras = (char *)malloc(sizeof(char) * (tPalavra->tamanho));
    for (int i = 0; i < tPalavra->tamanho; i++)
    {
        newLetras[i] = tPalavra->letras[i];
    }
    newLetras[tPalavra->tamanho - 1] = letra;
    if (tPalavra->tamanho == 1)
    {
        tPalavra->chave = letra;
    }

    free(tPalavra->letras);
    tPalavra->letras = newLetras;
    return 1;
}

short removeLetra(Palavra *palavra, char letra)
{
    palavra->tamanho--;
    short modifier = 0;
    char *newLetras = (char *)malloc(sizeof(char) * (palavra->tamanho));
    for (int i = 0; i <= palavra->tamanho; i++)
    {
        if (letra == palavra->letras[i])
        {
            newLetras[i] = palavra->letras[modifier + 1];
            continue;
        }
        newLetras[modifier] = palavra->letras[i];
        modifier++;
    }
    free(palavra->letras);
    palavra->letras = newLetras;
}

void imprimePalavra(Palavra palavra)
{
    printf("%s \n", palavra.letras);
}

int tamanhoPalavra(Palavra tPalavra)
{
    return (tPalavra.tamanho);
}
