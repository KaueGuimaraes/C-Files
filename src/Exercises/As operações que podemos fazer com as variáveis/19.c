// Elabore um programa que leia dois números inteiros e exiba o resultado das operações de "ou
// exclusivo", "ou bit a bit" e "bit a bit" entre eles.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    printf("Informe outro numero inteiro para deslocarmos o numero informado: ");
    scanf("%d", &pos);

    printf("Ou exclusivo: %d\n", n ^ pos);
    printf("Ou bit a bit: %d\n", n | pos);
    printf("Bit a bit: %d\n", n & pos);

    printf("\n");

    system("pause");
    return 0;
}