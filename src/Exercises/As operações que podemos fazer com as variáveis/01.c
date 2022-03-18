// Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    printf("O sucesso de %d e %d", n, n - 1);
    printf("\n");

    system("pause");
    return 0;
}