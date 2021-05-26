/* Escreva uma função que recebe, por parâmetro, dois valores X e Z e calcula e retorna X elevado a Z. 
(sem utilizar funções ou operadores de POTÊNCIA prontos). */
#include <stdio.h>
#include <stdlib.h>

int elevate(int x, int z)
{
    int result = 1;

    for (int i = 0; i < z; i++)
    {
        result *= x;
    }

    return result;
}

int main()
{
    int x, z;

    printf("Digite os valores respectivamente X e Z: ");
    scanf("%d %d", &x, &z);

    int result = elevate(x,z);

    printf("o valor de X elevado a Z é: %d\n", result);
    return 0;
}