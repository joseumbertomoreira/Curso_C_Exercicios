#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia tr�s n�meros inteiros e imprima na tela se os tr�s s�o maiores que 10


int main(){

    int num1, num2, num3;

    printf("Leia o n�mero 1: ");
    scanf("%d", &num1);

    printf("Leia o n�mero 2: ");
    scanf("%d", &num2);

    printf("Leia o n�mero 3: ");
    scanf("%d", &num3);

    if(num1 > 10 && num2 > 10 && num3 > 10){
        printf("Todos os numeros sao maiores de 10");
    } else {
        printf("Um ou mais n�meros s�o menores ou iguais a 10");
    }

    return 0;

}
