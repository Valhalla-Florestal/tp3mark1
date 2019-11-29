#include <stdio.h>
#include <stdlib.h>
#include "tTexto.h"

int main()
{
    srand( (unsigned)time(NULL) );
    int n;
    printf("digite um tamanho: ");
    scanf("%d",&n);
    tTexto texto[n];
    Tpalavra palavra[n];
    inicializaPalavra(&palavra,n);
    geraPalavraAleatoria(&palavra,n);
    imprimePalavra(&palavra,n);

    return 0;
}
