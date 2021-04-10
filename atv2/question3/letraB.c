#include <stdlib.h>
#include <stdio.h>

int main()
{

    int x = 7;
    int y = 9;
  
    double equacao = (3 * x) + (4 * y) + (5 * (x - y));


    if (equacao < 100)
    {
        printf("Questão 3 - (letra B) - O resultado da equação é menor que 100:  %.2lf\n", equacao);
    }
    else
    {
        printf("Questão 3 - (letra B) - O resultado da equação é maior que 100:  %.2lf\n", equacao);
    }

    return 0;
}
