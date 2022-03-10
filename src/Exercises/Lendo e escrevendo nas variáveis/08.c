// Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em
// que foram lidos.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int b;

    printf("Informe 2 valores inteiros: ");
    scanf("%d %d", &a, &b); // Os valores podem ser inforamos um em cada linha ou separando-os por um espaço " "

    printf("Aqui estao os valores informados na ordem reversa: %d%d", b, a);
    printf("\n");

    system("pause");
    return 0;
}