// Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente
// o resultado na tela.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float n, s = 0;

    for(int i = 1; i <= 10; i++) {
        printf("Informe o valor %d: ", i);
        scanf("%f", &n);

        s += n;
    }
    
    printf("A soma dos valores informados equivale a: %f", s);
    printf("\n");

    system("pause");
    return 0;
}