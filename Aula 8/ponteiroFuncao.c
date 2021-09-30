#include <stdio.h>

void imprimirNumero(int numero, float numeroFloat){
    printf("Numeros:\nint = %d\nfloat = %f\n", numero, numeroFloat);
}

int main(int argc, char const *argv[]){

    //BALACA DOS PONTEIROS DE FUNÇÃO
    void (*printNumber)(int, float) = &imprimirNumero;
    (*printNumber)(13, 8.0);

    //BALACA DA BALACA DOS PONTEIROS DE FUNÇÃO
    void (*print)(int, float) = imprimirNumero;
    print(8, 13.0);



    return 0;
}

    // cls apaga linha do prompt no windows
