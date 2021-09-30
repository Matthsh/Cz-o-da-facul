#include <stdio.h>



void imprimir(int[], int);

int somar(int[], int);

int media(int[], int);



int main(int argc, char const *argv[])

{

    int qtdeItens = 0;

    printf("Qual quantidade de idades gostaria de obter a seguir? ");

    scanf("%d", &qtdeItens);



    int idades[qtdeItens];



    //zerar(idades);



    for (int i = 0; i < qtdeItens; i++)

    {

        printf("Digite a idade %d: ", i + 1);

        scanf("%d", &idades[i]);

    }



    imprimir(idades, qtdeItens);



    int somaDasIdades = somar(idades, qtdeItens);

    printf("A soma das idades é %d\n", somaDasIdades);



    printf("A média das idades é %d\n", media(idades, qtdeItens));

    ordenarArray(idades, qtdeItens);

    imprimir(idades, qtdeItens);


    /*   



    ordernarArray(idades);

    imprimir(idades);

    */



    return 0;

}



void imprimir(int idades[], int qtdeItens)

{

    int i = 0;

    while (i < qtdeItens)

    {

        printf("%d, ", idades[i]);

        i++;

    }



    printf("\n\n");

}



int somar(int idades[], int qtdeItens)

{

    int i = 0, somaIdades = 0;

    while (i < qtdeItens)

    {

        //soma = soma + idades[i];

        somaIdades += idades[i];



        i++;

    }



    return somaIdades;

}



int media(int idades[], int qtdeItens)

{

    return somar(idades, qtdeItens) / qtdeItens;

}

void ordenarArray(int idades[], int qtdeItens){
    int continua;
    do{
        continua = 0;
        for (int i = 0; i < qtdeItens -1; i++){
            if (idades[i] > idades[i+1]){
                int aux = idades[i];
                idades[i] = idades[i+1];
                idades[i+1] = aux;
                continua = 1;
            }
        }
    }while(continua);
}
