// Faça um programa que leia dois números e mostre qual deles é o maior.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &n2);

    if(n1 > n2) printf("%d > %d. O primeiro numero e o maior", n1, n2); // Primeiro é o mais
    else if(n2 > n1) printf("%d > %d. O segundo numero e o maior", n2, n1); // Segundo é o maior
    printf("\n");

    system("pause");
    return 0;
}