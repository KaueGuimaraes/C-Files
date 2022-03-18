// Faça um programa que leia um número real e imprima a quinta parte desse número.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float n;

    printf("Informe um numero real: ");
    scanf("%f", &n);

    printf("A quinta parte do numero %f e %f", n, n / 5);
    printf("\n");

    system("pause");
    return 0;
}
