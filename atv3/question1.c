/*Declare 16 números inteiros e com o printf() imprima-os na forma de matriz 4x4*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main()
{

    int matriz[4][4];
    int i,j;

    //preenche a matriz
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matriz[i][j] = rand() % 16;
        }
    }

    //mostra a matriz
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

 

    return 0;
}