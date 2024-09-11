#include <stdio.h>
#include <stdlib.h>

//Faca um programa que leia dois numeros inteiros e imprima na tela se um deles for maior que 10

int main(){

    int num1, num2;
    printf("Leia o primeiro numero: ");
    scanf("%d", &num1);

    printf("Leia o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > 10 || num2 > 10){
        printf("Algum numero e maior que 10");
    } else {
        printf("Nenhum numero e maior que 10");
    }

    return 0;

}
