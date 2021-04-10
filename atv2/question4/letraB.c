/*b. CALCULADORA DE JUROS: Calcular o valor a ser pago em juros 
(considerando 25%) na compra de um determinado valor informado pelo usuário.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    double valor;
    double valorTotal;
    printf("\nInforme o valor: \n");
    scanf("%le",&valor);

    valorTotal = (valor * 0.25);

    printf("valor a ser pago: %.2lf", valorTotal);

    return 0;
}