// Faça um programa que leia 10 inteiros e imprima sua média.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int meta = 10; // Valor a ser atingido por i
    int n, s = 0; // N: Número informado pelo usuário; S: Soma dos valores
    float m; // M: Média dos valores

    for(int i = 1; i <= meta; i++) {
        printf("Informe o valor %d: ", i);
        scanf("%d", &n);

        s += n;
    }
    m = (s/meta) + (0.1 * (s%meta)); // A média será igual à soma de todos os número dividido pela quantidade dos valores mais o resto da divisão, ou seja, a divisão como um todo

    printf("A media dos valores informados e igual a: %f", m);
    printf("\n");

    system("pause");
    return 0;
}