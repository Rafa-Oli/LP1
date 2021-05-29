/* 
Implemente uma função de busca binária em um array de inteiros. 
A função deve receber um array de inteiros como parâmetro e o elemento que se deseja buscar, 
o retorno deve ser o indice no qual o elemento se encontra, 
caso não encontre o elemento o retorno da função será o valor -1.
*/

#include <stdio.h>
#include <stdlib.h>

const int SIZE = 5;

int binary_search(int vector[SIZE], int item)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (vector[i] == item)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int vector[] = {9, 30, 3, 5, 1};
    int valor;

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &valor);

    int result = binary_search(vector, valor);

    if (result == -1)
    {
        printf("o valor não foi encontrado\n");
    }
    else
    {
        printf("o indice do elemento no vetor é: %d\n", result);
    }
    return 0;
}