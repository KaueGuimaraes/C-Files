// Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão desse
// número por dois (utilize os poderadores de deslocamento de bits).

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, r;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    r = n * 2;

    printf("%d * 2 = %d", n, r);
    printf("\n");

    system("pause");
    return 0;
}