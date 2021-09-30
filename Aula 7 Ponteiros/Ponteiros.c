#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char *nome = "Dick Vigarista";

    printf("\nnome: %s\n", nome);

    printf("\n******************************************\n");

    imprimirCaracteresDoNomePorLinhaComPonteiro(nome);

    printf("\n******************************************\n");

    imprimirCaracteresDoNomePorLinhaComoArray(nome);

    printf("\n******************************************\n");

    maiscula(nome);

    printf("\nnome: %s\n", nome);
    

        


    return 0;
}

void imprimirCaracteresDoNomePorLinhaComPonteiro(char *nome){
    int posicao = 0;
        while (*( nome + posicao) != '\0'){
            printf("%c\n", *(nome + posicao));
            posicao++;
        } 
}

void imprimirCaracteresDoNomePorLinhaComoArray(char *nome){
    int posicao = 0;
        while (nome[posicao] != '\0'){
            printf("%c\n", *(nome + posicao));
            posicao++;
        }
}

void maiucula (char *nome){
    for(int posicao = 0; *(nome + posicao) != '\0'; posicao++){
        char *letra = toUpper(nome + posicao);
        printf("%c", letra);
    }
}
