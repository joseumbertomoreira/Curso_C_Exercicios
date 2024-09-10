#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia um número inteiro
//e imprima na tela se ele está entre 0 e 10

int main(){

    int numero;
    printf("Leia o numero:");
    scanf("%d", &numero);

    if(0 < numero && numero < 10){
        printf("Numero digitado entre 0 e 10\n");
    }

    return 0;
}
