#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota_a, nota_b;
    printf("Leia a nota do aluno 1: ");
    scanf("%f", &nota_a);

    printf("Leia a nota do aluno 2: ");
    scanf("%f", &nota_b);

    printf("A média das notas do aluno1 e do aluno2 = %.2f\n", (nota_a+nota_b)/2);

    return 0;
}
