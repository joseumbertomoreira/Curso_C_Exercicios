#include<stdio.h>
#include<stdlib.h>

//Fa�a um programa que leia dois n�meros inteiros que imprima qual � o maior deles ou se s�o iguais

int main(){

    int num1, num2;

    printf("Leia o primeiro numero:");
    scanf("%d", &num1);

    printf("Leia o segundo numero:");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("%d > %d", num1, num2);
    } else if(num1 == num2){
        printf("%d == %d", num1, num2);
    } else {
        printf("%d < %d", num1, num2);
    }

    return 0;

}
