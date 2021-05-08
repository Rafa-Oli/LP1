/*
Modifique a sua resposta para o exercício anterior trocando o loop que você escolheu por outro.
 Por exemplo, se a resposta se baseou no laço for troque por while.
*/

#include <stdio.h>
int main()
{
    int numero, maior, menor, soma;
    int i=1;
    printf("Entre com o 1o numero inteiro: ");
    scanf("%i", &numero);
    maior = numero;
    menor = numero;
    soma += numero;

    while (i < 10)
    {
        printf("\nEntre com o %do numero inteiro: ", i + 1);
        scanf("%i", &numero);
        soma += numero;
        if (numero > maior)
        {
            maior = numero;
        }
        else if (numero < menor)
        {
            menor = numero;
        }
        i++;
    }
    printf("\nO menor numero é: %d", menor);
    printf("\nO maior numero é: %d", maior);
    printf("\nA soma dos números digitados é: %d", soma);
    printf("\nA média dos números é: %d", soma / 10);
}