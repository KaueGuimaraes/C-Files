// Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
// seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na
// tabela a seguir:
//
//  Número digitado         Média
//
//  1                       Geométrica
//                          x * y * z
//
//  2                       Ponderada
//                          (x + 2 * y + 3 * z) / 6
//
//  3                       Harmônica
//                          (1) / ((1/x) + (2/y) + (1/z))
//
//  4                       Aritmética
//                          (x + y + z) / 3

#include <stdio.h>
#include <stdlib.h>

int main() {
    int esc;
    float resp, x, y, z;

    printf("Informe o valor de x: ");
    scanf("%f", &x);

    printf("Informe o valor de y: ");
    scanf("%f", &y);

    printf("Informe o valor de z: ");
    scanf("%f", &z);

    printf("Escolha uma media\n");
    printf("1 - Geometrica \n2 - Ponderada \n3 - Harmonica \n4 - Aritmetica");
    printf("\n: ");
    scanf("%d", &esc);

    if(esc == 1)
        resp = x * y * z;
    else if(esc == 2)
        resp = (x + 2 * y + 3 * z) / 6;
    else if(esc == 3)
        resp = 1 / (1/x) + (1/y) + (1/z);
    else if(esc == 4)
        resp = (x + y + z) / 3;
    else resp = 0;

    printf("media = %f", resp);
    printf("\n");

    system("pause");
    return 0;
}