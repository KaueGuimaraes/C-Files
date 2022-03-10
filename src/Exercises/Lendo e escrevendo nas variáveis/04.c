// Faça um programa que leia um número inteiro e depois o imprima uando o operador "%f".
// Veja o que aconteceu.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    printf("Valor impimido: %f", n);
    printf("\n");

    system("pause");
    return 0;
}