// Faça um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três
// maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha.
// Use um único comando printf() para cada operação de escrita das três variáveis.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char l;
    int n;
    float f;

    printf("Informe um caractere: ");
    scanf("%c", &l);

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    printf("Informe um valor decimal: ");
    scanf("%f", &f);

    printf("\n");

    printf("Separado por espacos:\n%c %d %f\n\n", l, n, f);
    printf("Separados por uma tabulação horizontal:\n%c\t%d\t%f\n\n", l, n, f);
    printf("Uma em cada linha:\n1 - %c \n2 - %d \n3 - %f\n\n");

    system("pause");
    return 0;
}