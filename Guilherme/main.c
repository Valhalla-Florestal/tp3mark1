#include "Biblioteca.h"

//#include "src/Estruturas/Estruturas.h"
//#include "src/Algoritmos/Algoritmos.h"

int main(int argc, char **argv)
{
    srand((unsigned)time(NULL));

    Palavra tPalavra;
    Texto tTexto;
    Biblioteca tBiblioteca;

    char letra;
    int num, tam = 0, numTextos = 0;
    num = 1 + (rand() % 10);

    printf("Entre com a quantidade de textos: ");
    scanf("%d", &numTextos);

    inicializaPalavra(&tPalavra);
    inicializaTexto(&tTexto);
    inicializaBiblioteca(&tBiblioteca);

    for (int i = 0; i < numTextos; i++)
    {
        for (int j = 0; j < num; j++)
        {
            for (int k = 0; k < num; k++)
            {
                letra = 97 + (char)(rand() % 26);
                insereLetra(&tPalavra, letra);
            } // letra
            inserePalavra(&tTexto, tPalavra);
            inicializaPalavra(&tPalavra);
        } // palavra
        insereTexto(&tBiblioteca, tTexto);
    } //texto

    tam = tamanhoPalavra(tPalavra);
    ordenaPalavraSelecao(&tPalavra, tam);

    //imprimePalavra(tPalavra);
    printf("Textos: \n");
    imprimeTexto(tTexto);
}