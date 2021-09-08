/*
S002 Desenvolver um programa que leia dos valores e mostre o resto da divisão do primeiro
valor digitado pelo segundo e também a exponenciação do segundo pelo primeiro valor
lido.
*/

#include <stdio.h>

void main(void){
    int valor1, valor2, resto;

    printf("Diga o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    resto = valor1 % valor2;

    int aux = valor2;
    for(int cont = 1; cont < valor1; cont++){
        valor2 = valor2 * aux;
    }

    printf("O valor do resto da divizão do primeiro valor pelo segundo é: %d \n", resto);
    printf("O valor do segundo valor lido elevado ao primeiro valor lido é: %d", valor2);

}