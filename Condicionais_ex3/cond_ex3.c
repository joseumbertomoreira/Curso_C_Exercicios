#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia um n�mero e informe se ele � par ou impar.

int main(){

    int numero;

    printf("Leia o n�mero:");
    scanf("%d", &numero);

    if(numero % 2 == 0)    {
        printf("Numero par!");
    } else {
        printf("Numero impar");
    }

    return 0;

}
