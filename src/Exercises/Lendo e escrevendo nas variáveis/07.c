// Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    scanf("%s", &c);

    printf("O Valor informato foi %d", c);
    printf("\n");

    system("pause");
    return 0;
}