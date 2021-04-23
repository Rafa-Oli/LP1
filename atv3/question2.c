/*Pesquise e imprima uma tabela usando printf() que contenha as constantes Pi, Euler, Planck e 
a Velocidade da luz com as suas respectivas unidades de medida.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    printf("\n____________________________________________\n");
    printf("| Pi (π) : %f\n", M_PI);
    printf("|___________________________________________|\n");
    printf("| Euler (e) : %f\n", M_E);
    printf("|___________________________________________|\n");
    printf("| Planck (h) : 6,6207.10-34m².kg/s\n");
    printf("|___________________________________________|\n");
    printf("| Velocidade da luz (c) : 299 792 458 m/s\n");
    printf("|___________________________________________|\n");

    return 0;
}