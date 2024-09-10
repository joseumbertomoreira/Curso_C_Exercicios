#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia dois números inteiros e imprima na tela se a soma deles é:
//maior/igual a 10 ou menor que 10


int main(){

    int num1, num2;
    printf("Leia o primeiro numero\n");
    scanf("%d", &num1);

    printf("Leia o segundo numero\n");
    scanf("%d", &num2);

    if((num1 + num2) >= 10){
        printf("%d + %d >= 10\n", num1, num2);
    } else {
        printf("%d + %d < 10\n", num1, num2);
    }

    return 0;
}
