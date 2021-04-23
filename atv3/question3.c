/*
Leia 3 números inteiros e os imprima em ordem inversa.
 Ex.: Se a entrada receber 1,2 e 3, a saída será 3, 2, 1.
 */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("\nInforme os 3 valores inteiros: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("\nA ordem inversa é: %d %d %d\n", num3,num2,num1);
    return 0;
}