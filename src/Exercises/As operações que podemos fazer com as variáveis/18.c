// Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à
// direita, do primeiro número pelo segundo.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos;

    printf("Informe um numeros inteiros: ");
    scanf("%d", &n);

    printf("Informe quantas posicoes deseja deslocar: ");
    scanf("%d", &pos);

    printf("Deslocamento a direita: %d\n", n >> pos);
    printf("Deslocamento a esquerda: %d\n", n << pos);

    system("pause");
    return 0;
}