/*Elabore um programa que leia um texto digitado no terminal e imprima as 4 primeiras letras do texto.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char text[10];

    printf("Digite um texto: ");
    scanf("%s", text);

    for (i = 0; i < text[i]; i++)
    {
        if (i < 4)
        {
            printf("Letra %d: %c\n", i + 1, text[i]);
        }
    }
    return 0;
}