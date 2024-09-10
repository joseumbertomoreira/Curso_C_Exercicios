#include <stdio.h>
#include <stdlib.h>

int main(){

    // Crie um algoritmo que leia 3 números inteiros de uma vez só e coloque o resultado
    // da multiplicação entre os 3 em uma variável própria, depois exiba essa variável.

    int numero1, numero2, numero3, resultado;
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    resultado = numero1 * numero2 * numero3;

    printf("O resultado da multiplicacao = %d\n", resultado);

    return 0;

}
