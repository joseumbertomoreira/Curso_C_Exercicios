#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;
    char opcao;

    printf("Leia numero um: \n");
    scanf("%d", &num1);

    printf("Leia numero dois: \n");
    scanf("%d", &num2);

    fflush(stdin);
    printf("Qual operacao deseja realizar? + ou -\n");
    scanf("%c", &opcao);


    switch(opcao){
        case '+':
            printf("%d + %d = %d \n", num1, num2, (num1 + num2));
            break;

        case '-':
            printf("%d - %d = %d \n", num1, num2, (num1 - num2));
            break;

        default:
            printf("Opcao inválida");
            break;

    }

    return 0;
}

