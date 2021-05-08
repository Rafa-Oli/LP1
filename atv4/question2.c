/*
Implemente um programa que leia até 10 inteiros do teclado ou para quando dois inteiros consecutivos 
        sejam digitados. Após a leitura o programa deverá
 imprimir o maior, o  menor, a média e a soma dos números digitados.
*/

#include <stdio.h>
int main()
{
    int numero,maior, menor, soma;
    int i;
    printf("Entre com o 1o numero inteiro: ");
    scanf("%i", &numero);
    maior = numero;
    menor = numero;
    soma += numero;

    for (i = 1; i < 10; i++)
    {
        printf("\nEntre com o %do numero inteiro: ", i + 1);
        scanf("%i", &numero);
            soma += numero;
        if (numero > maior){
            maior = numero;
        }
        else if (numero < menor){
            menor = numero;
        }
    }
    printf("\nO menor numero é: %d", menor);
    printf("\nO maior numero é: %d", maior);
    printf("\nA soma dos números digitados é: %d", soma);
    printf("\nA média dos números é: %d", soma/10);

}