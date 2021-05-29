/*Faça uma função chamada “sum” que soma o conteúdo de todos os índices de um array de inteiros.
int sum(int array[], int len) { ... } */

#include <stdio.h>
#include <stdlib.h>

int sum(int array[], int len) {
    int sum;
    for (int i = 0; i < len; i++)
    {
        sum += array[i];
    }

        return sum;
}

int main()
{
    int vector[] = {50, 40, 34, 52, 10, 7, 2};
    int len = 7;

    int result = sum(vector, len);

    printf("A soma de todos os indices é : %d\n", result);
    
    return 0;
}