/*c.DETECTOR DE MÍNIMOS E MÁXIMOS : Determinar o maior e o menor valor de um conjunto de números inteiros
 positivos.Considere que o conjunto de dados de entrada termina quando é fornecido o número - 5. */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i = 0;
    int maior = 0;
    int menor;

    printf("Entre com os valores:\n");
    
  do  {
        scanf("%d", &i);

        if (i > maior)
        {
            maior = i;
        } 
         else if(i < maior && i != -5)
        {
            menor = i;
        }

  } while (i != -5);

    printf("\nO maior valor é: %d", maior);

    printf("\nO menor valor é: %d", menor);

    return 0;
}