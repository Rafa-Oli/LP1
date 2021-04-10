/*a.CALCULADORA DE PRODUTO : Calcular o valor total de um compra considerando que o cliente pode comprar várias unidades de
     um determinado produto e que cada produto possui um valor a este associado.Apenas um produto deve ser informado 
     por vez.Ao final o algoritmo deve informar qual o produto comprado, o preço da unidade, o número de unidades 
     compradas e o preço total.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    char nomeProduto1[50];
    char nomeProduto2[50];
    int unidadesProduto2;
    int unidadesProduto1;
    double precoUnidade1 = 34.89;
    double precoUnidade2 = 90.89;
    double valorTotal1;
    double valorTotal2;

    printf("Informe dois produtos: \n");
    printf("\nInforme nome e unidades do produto 1: \n");
    scanf("%s %i", nomeProduto1, &unidadesProduto1);

    printf("\nInforme nome e unidades do produto 2: \n");
    scanf("%s %i", nomeProduto2, &unidadesProduto2);

    valorTotal1 = unidadesProduto1 * precoUnidade1;
    valorTotal2 = unidadesProduto2 * precoUnidade2;


    printf("\nProduto 1 - Nome: %s , unidades: %i, preço/unidade: %f, Preço Total: %f\n", nomeProduto1, unidadesProduto1, precoUnidade1, valorTotal1);
    
    printf("Produto 2 - Nome: %s , unidades: %i, preço/unidade: %f, Preço Total: %f\n", nomeProduto2, unidadesProduto2, precoUnidade2, valorTotal2);
   

    return 0;
}