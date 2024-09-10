#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia um número e informe se ele é par ou impar.

int main(){

    int numero;

    printf("Leia o número:");
    scanf("%d", &numero);

    if(numero % 2 == 0)    {
        printf("Numero par!");
    } else {
        printf("Numero impar");
    }

    return 0;

}
