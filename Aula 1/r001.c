/* 

   R001 Faça um algoritmo que leia um valor de referência, um número inicial e outro final.

Informe se o valor de referência encontra-se entre o número inicial e o final digitados.

*/

#include <stdio.h>



int numRefEstaContidoEm(int, int, int);

int numRefEstaContidoEmVa(int, int, int);



int main(int argc, char const *argv[])

{

    int numReferencia, numInicial, numFinal;



    printf("Número de Referência: ");

    scanf("%d", &numReferencia);

    printf("Número Inicial: ");

    scanf("%d", &numInicial);

    printf("Número Final: ");

    scanf("%d", &numFinal);



    // If

    if (numReferencia >= numInicial && numReferencia <= numFinal)

    {

        printf("Achei o número de referência 1!\n");

    }



    // While

    int numAndante = numInicial;

    while (numAndante <= numFinal)

    {

        if (numAndante == numReferencia)

        {

            printf("Achei o número de referência 2!\n");

            numAndante = numFinal + 1;

        }

        else

        {

            numAndante++;

        }

    }



    // For

    for (numAndante = numInicial; numAndante <= numFinal; numAndante++)

    {

        if (numAndante == numReferencia)

        {

            printf("Achei o número de referência 3!\n");

            numAndante = numFinal + 1;

        }

    }



    // do while

    numAndante = numInicial;

    do

    {

        if (numAndante == numReferencia)

        {

            printf("Achei o número de referência 4!\n");

            numAndante = numFinal + 1;

        }

    } while (numFinal > numAndante++);



    if (numRefEstaContidoEm(numReferencia, numInicial, numFinal))

    {

        printf("Achei o número de referência 5!\n");

    }



    if (numRefEstaContidoEmVa(numReferencia, numInicial, numFinal))

    {

        printf("Achei o número de referência 6!\n");

    }



    return 0;

}



int numRefEstaContidoEm(int numReferencia, int numInicial, int numFinal)

{

    if (numReferencia >= numInicial && numReferencia <= numFinal)

    {

        return 1;

    }

    else

    {

        return 0;

    }

}



int numRefEstaContidoEmVa(int numReferencia, int numInicial, int numFinal)

{

    return (numReferencia >= numInicial && numReferencia <= numFinal);

}
