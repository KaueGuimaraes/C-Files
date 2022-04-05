// Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais
// de 0 até N em ordem crescente.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Informe um numero inteiro e positivo: ");
    scanf("%d", &n);

    printf("\n");
    for(int i = 0; i <= n; i++) printf("%d\n", i);
    
    system("pause");
    return 0;
}