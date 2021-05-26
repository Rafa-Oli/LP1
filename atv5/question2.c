/*A geometria Euclidiana baseia-se nas relações entre pontos, retas e planos. 
Nesse sentido, escreva uma função que calcule e retorne a distância entre dois pontos (x1, y1) e (x2, y2). 
Os valores de retorno devem ser do tipo float.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float distance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
    float x1, y1, x2, y2;

    printf("Digite os valores respectivamente x1 y1 x2 y2: ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    float result = distance(x1, y1, x2, y2);

    printf("A distancia entre os dois pontos é: %.2f\n", result);
    return 0;
}