#include <stdio.h>
#include <stdlib.h>

int main(){

    // Crie um algoritmo que leia 3 n�meros inteiros de uma vez s� e coloque o resultado
    // da multiplica��o entre os 3 em uma vari�vel pr�pria, depois exiba essa vari�vel.

    int numero1, numero2, numero3, resultado;
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    resultado = numero1 * numero2 * numero3;

    printf("O resultado da multiplicacao = %d\n", resultado);

    return 0;

}
