/*Resolva uma equação da reta y = ax + b. 
Receba o valor de X, A e o valor de B (sendo inteiros) e imprima o valor de y (real).*/


#include <stdlib.h>
#include <stdio.h>

int main()
{
    double y;
    int x, a, b;


    printf("\nInforme o valor de X: \n");
    scanf("%d", &x);
    printf("\nInforme o valor de A: \n");
    scanf("%d", &a);
    printf("\nInforme o valor de B: \n");
    scanf("%d", &b);
    y = (a * x) + b;

    printf("\nO valor de y é: %.2f\n", y);
    return 0;
}