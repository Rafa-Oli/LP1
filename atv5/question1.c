#include <stdio.h>
#include <stdlib.h>

void bit(int num)
{
    int bit[16];
    int i;
    for (i = 15; i >= 0; i--)
    {
        if (num % 2 == 0)
        {
            bit[i] = 0;
        }
        else
        {
            bit[i] = 1;
        }
        num = num / 2;
    }

    for (i = 0; i < 16; i++)
    {
        printf("%d", bit[i]);
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