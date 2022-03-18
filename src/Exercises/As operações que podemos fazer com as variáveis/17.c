// Escreva um programa que leia um número inteiro e mostre seu completemento bit a bit.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    printf("O complemento bit a bit de %d e %d", n, ~n);
    printf("\n");

    system("pause");
    return 0;
}