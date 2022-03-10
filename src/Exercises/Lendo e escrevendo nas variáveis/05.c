// Faça um programa que leia um valor float e depois o imprima usando o operador "%d".
// Veja o que aconteceu.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float n;

    printf("Digite um numero decimal: ");
    scanf("%f", &n);

    printf("Valor inserido: %d", n);
    printf("\n");

    system("pause");
    return 0;
}