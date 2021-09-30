#include <stdio.h>
#define qtdditens 3

int main(int argc, char const *argv[])
{
    int idades[qtdditens];

    for (int i = 0; i < qtdditens; i++){

    printf("Digite a idade %d: ", i + 1);
    scanf("%d", &idades[i]);
    }

        imprimir(idades);

        //int somaDasIdade = somar(idades);
        //int mediaDasIdades = media(idades);

        //printf("A soma das idades é %d\n", somaDasIdade);
        //printf("A média das idades é %d\n", mediaDasIdades);

    // cls apaga as linhas do prompt (safe)
}

void imprimir(int idades[]){
    
    // calcula o tamanho de todas as vairaveis e divide pelo tamanho de uma variavel para saber quantas variaveis tem
    int tamArray = sizeof(idades) / sizeof(idades[0]);
    //ex:
    //totalVariaveis = 160
    //umaVariavel = 32
    //numeroDeVariaveis = 5

    int i = 0;
    while (i < tamArray){
        printf("%d", idades[i]);
    }
}