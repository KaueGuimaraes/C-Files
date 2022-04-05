// Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais
// de 0 até N em ordem decrescente.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Informe um numero inteiro e positivo: ");
    scanf("%d", &n);

    printf("\n");
    for(int i = n; i >= 0; i--) printf("%d\n", i);

    system("pause");
    return 0;
}