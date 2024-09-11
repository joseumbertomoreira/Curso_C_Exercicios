#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia dois números inteiros e imprima na tela se a soma deles estiver entre 0 e 10 ou se a soma for par

int main(){


    int num1, num2;
    printf("Leia o primeiro numero: ");
    scanf("%d", &num1);

    printf("Leia o segundo numero: ");
    scanf("%d", &num2);

    if( ((num1 + num2 > 0) && (num1 + num2 < 10)) || ((num2 + num1) % 2) == 0){
        printf("Passou na condicao");
    } else {
        printf("Nao passou na condicao");
    }

    return 0;

}

