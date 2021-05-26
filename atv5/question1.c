#include <stdio.h>
#include <stdlib.h>

void bit(int num)
{
    int bit[16];
    int aux;
    for (aux = 15; aux >= 0; aux--)
    {
        if (num % 2 == 0)
        {
            bit[aux] = 0;
        }
        else
        {
            bit[aux] = 1;
        }
        num = num / 2;
    }

    for (aux = 0; aux < 16; aux++)
    {
        printf("%d", bit[aux]);
    }

    printf("\n");
}

int main()
{
    int numero;


    printf("Digite um inteiro: ");
    scanf("%d", &numero);

    bit(numero);
    
    return 0;
}