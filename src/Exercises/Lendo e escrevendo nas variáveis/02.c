// Escreva um programa que leia um número inteiro e depois o imprima

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    printf("O valor digitado foi: %d", n);
    printf("\n");

    system("pause");
    return 0;
}