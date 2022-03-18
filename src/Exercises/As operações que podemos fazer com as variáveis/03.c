// Faça um programa que leia três valores inteiros e mostre sua soma.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3;

    printf("Informe 3 numeros inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("%d + %d + %d = %d", n1, n2, n3, n1 + n2 + n3);
    printf("\n");

    system("pause");
    return 0;
}
