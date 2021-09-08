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
    int somaDasIdade = somar(idades);
    int mediaDasIdades = media(idades);

    printf("A soma das idades é %d\n", somaDasIdade);
    printf("A média das idades é %d\n", mediaDasIdades);

    // cls apaga as linhas do prompt (safe)
}