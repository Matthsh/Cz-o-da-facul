/*
S003 Faça um algoritmo que leia o valor unitário de um produto, a quantidade e o percentual de
imposto. Calcule e mostre o valor total do produto acrescentando o imposto lido.
*/

#include <stdio.h>

void main(void){
    float valor, imposto;
    int quantidade;

    printf("Diga o valor do produto: ");
    scanf("%f", &valor);

    printf("Diga a quantidade: ");
    scanf("%d", &quantidade);

    printf("Digite a porcentagem de imposto sobre o produto: ");
    scanf("%f", &imposto);

    double valorTotal = (((imposto / 100 + 1) * valor) * quantidade);

    printf("O valor total a se pagar é de: %lf", valorTotal);
}