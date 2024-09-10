#include <stdio.h>
#include <stdlib.h>

int main(){

    // Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas

    int nota_a, nota_b;

    printf("Leia o valor da primeira nota:");
    scanf("%d", &nota_a);

    printf("Leia o valor da segunda nota:");
    scanf("%d", &nota_b);

    printf("O valor absoluto da diferenca entre as notas = %d", abs(nota_a - nota_b));

    return 0;

}
