#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia dois números inteiros e imprima na tela se algum for par

int main(){


    int num1, num2;
    printf("Leia o primeiro numero: ");
    scanf("%d", &num1);

    printf("Leia o segundo numero: ");
    scanf("%d", &num2);

    if((num1 % 2) == 0 || (num2 % 2) == 0){
        printf("Algum numero e par");
    } else {
        printf("Nenhum numero e par");
    }

    return 0;

}
