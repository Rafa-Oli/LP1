/*Escreva uma função que receba 3 notas de um aluno e uma letra. 
Se a letra for A a função retorna a média aritmética das notas do aluno, 
se for P, a sua  média ponderada  (pesos:  5,  3  e 2)  e se for  H, a sua  média harmônica.*/

#include <stdio.h>
#include <stdlib.h>

float media(float n1, float n2, float n3, char op)
{
    float result;
    if (op == 'A')
    {
        result = (n1 + n2 + n3) / 3;
    }
    else if (op == 'P')
    {
        result =  (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    }
    else if (op == 'H')
    {
        result = 3 / ((1/n1) + (1/n2) + (1/n3));
    }
    return result;
}

int main()
{
    float nota1, nota2, nota3, mediaCalculada;
    char op;

    printf("Digite a opção desejada: A = Aritmética, P = Ponderada ou H = Harmônica: \n");
    scanf("%c", &op);
    printf("Digite as 3 notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    mediaCalculada = media(nota1, nota2, nota3, op);

    printf("Media = %.2f", mediaCalculada);

    return 0;
}