/*Elabore um programa que crie 3 arquivos, no primeiro salve uma sequência de números inteiros de[0 a 100],
 no segundo arquivo de[200 a 300] e no último arquivo uma sequência de[500 a 1000].
 Obs.Escolham os nomes que desejarem para os arquivos.
 */

#include <stdio.h>
#include <stdlib.h>

FILE *arquivo1;
FILE *arquivo2;
FILE *arquivo3;
char teste[] = "conteudo do meu arquivo";

int main()
{
    int i;
    arquivo1 = fopen("0_100.txt", "w");
    arquivo2 = fopen("200_300.txt", "w");
    arquivo3 = fopen("500_1000.txt", "w");

    for (i = 0; i <= 1000; i++)
    {
        if (i <= 100) fprintf(arquivo1, "%d\n", i);
        
        if(i >= 200 && i <= 300) fprintf(arquivo2, "%d\n", i);

        if(i >= 500 && i <= 1000) fprintf(arquivo3, "%d\n", i);
    }

    printf("\n");
    printf("Concluido\n");

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);
    return 0;
}