/*
Criar um algoritmo que leia o valor de um produto e imprima na console este valor com
30% de acréscimo.
*/
#include "stdio.h"

void main(void){
    double ValorDoProduto;

    printf("Digite o valor do produto: ");
    scanf("%lf", &ValorDoProduto);

    ValorDoProduto *= 1.3;

    printf("Valor do produt com acréscimo de 30%% é %lf", ValorDoProduto);


}