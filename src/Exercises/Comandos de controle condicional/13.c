// Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas
// (as operações básicas, por exemplo). O usuário escolhe uma das opções, e o seu programa pede
// dois valores numérios e realiza a opção. mostrando o resultado.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int esc;
    float x, y, resp;

    printf("Escolha uma opcao matematica\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf(": ");
    scanf("%d", &esc);

    if(esc >= 1 && esc <= 4) {
        printf("Informe o primeiro numero: ");
        scanf("%f", &x);

        printf("Informe o segundo numero: ");
        scanf("%f", &y);

        switch (esc) {
            case 1: printf("%f + %f = ", x, y); resp = x + y; break; // Soma
            case 2: printf("%f - %f = ", x, y); resp = x - y; break; // Subtracao
            case 3: printf("%f * %f = ", x, y); resp = x * y; break; // Multiplicacao
            case 4: printf("%f / %f = ", x, y); resp = x / y; break; // Divisao
            
            default:
                printf("%d ? %d = ", x, y); break;
        }
        printf("%f", resp);
    }else
        printf("Expressao invalida");
    printf("\n");
 
    system("pause");
    return 0;
}