#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia três números inteiros e imprima na tela se os três são maiores que 10


int main(){

    int num1, num2, num3;

    printf("Leia o número 1: ");
    scanf("%d", &num1);

    printf("Leia o número 2: ");
    scanf("%d", &num2);

    printf("Leia o número 3: ");
    scanf("%d", &num3);

    if(num1 > 10 && num2 > 10 && num3 > 10){
        printf("Todos os numeros sao maiores de 10");
    } else {
        printf("Um ou mais números são menores ou iguais a 10");
    }

    return 0;

}
