/* 
Escreva um programa que lê um inteiro do teclado responde ‘sim’
 se ele é um múltiplo  de 3 e ‘não’ caso contrário.
 */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num1;

    printf("\nInforme um valor inteiro: \n");
    scanf("%d", &num1);

    if (num1 % 3 == 0)
    {
        printf("O número é múltiplo de 3");
    }
    else
    {
        printf("O número não é múltiplo de 3");
    }
    return 0;
}