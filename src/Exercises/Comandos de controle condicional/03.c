// Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    if(n % 2 == 0) printf("%d e par", n);
    else printf("%d e impar", n);
    printf("\n");

    system("pause");
    return 0;
}