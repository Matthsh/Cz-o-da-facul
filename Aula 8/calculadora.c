#include <stdio.h>

float adicionar(float num1, float num2){
    return num1 + num2;
}


float subtrair(float num1, float num2){
    return num1 - num2;
}

float multiplicar(float num1, float num2){
    return num1 * num2;
}

int main(int argc, char const *argv[])
{
    int opcao;
    float num1 = 13, num2 = 8;
    // declaração de um ponteiro de array, de funções chamado de "calc"
    // cujas funções recebem dois parâmetros cada do tipo float
    float (*calc[])(float, float) = {adicionar, subtrair, multiplicar};

    do {

        printf("\nEscolha: 0 para adicionar, 1 para subtrair e 2 para multiplicar\n");
        scanf("%d", &opcao);

        
        if (opcao < 0 || opcao > 4){
            printf("Opcao invalida! opcoes validas sao 0, 1, 2!");
        }else if (opcao < 4){
            printf("\nDigite os numeros: ");
            printf("\nNumero 1: ");
            scanf("%f", &num1);
            printf("\nNumero 2: ");
            scanf("%f", &num2);
            printf("\nResultado: %12.2f", calc[opcao](num1, num2));
        }
    } while(opcao != 4);

    printf("fim da execucao");

    return 0;
}

  /*
    metodo tradicional
    switch (opcao){ 
        case 0:
        adicionar(num1, num2);
        break;
        case1:
        subtrair(num1, num2);
        break;
        case2:
        multiplicar(num1, num2);
        break;
    }
    */