// Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas duplas.
// Assim, se o caractere lido for a letra A, deverá ser impresso "A".

#include <stdio.h>
#include <stdlib.h>

int main() {
    char l;

    printf("Informe um caractere: ");
    scanf("%c", &l);

    printf("O valor informado foi: \"%c\"", l);
    printf("\n");

    system("pause");
    return 0;
}