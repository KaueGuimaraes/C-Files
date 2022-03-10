// Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha.
// Use um único comando printf() para isso.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char l1, l2, l3;

    printf("Informe 3 caracteres: ");
    scanf("%c%c%c", &l1, &l2, &l3);

    printf("Primeiro caractere: %c \nSegundo caractere: %c \nTerceiro caractere: %c", l1, l2, l3);
    printf("\n");

    system("pause");
    return 0;
}