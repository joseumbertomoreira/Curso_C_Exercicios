#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia um n�mero inteiro
//e imprima na tela se ele est� entre 0 e 10

int main(){

    int numero;
    printf("Leia o numero:");
    scanf("%d", &numero);

    if(0 < numero && numero < 10){
        printf("Numero digitado entre 0 e 10\n");
    }

    return 0;
}
