// Faça um programa que leia um valor em reais e a cotação do dolar. Em seguida, imprima o valor
// correspondente em doláres.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float r;
    float real, dolar;

    printf("Informe quantos R$");
    scanf("%f", &real);

    printf("Informe a cotacao do dolar atualmente $");
    scanf("%f", &dolar);

    r = real / dolar;

    printf("R$%f -> $%f", real, r);
    printf("\n");

    system("pause");
    return 0;
}
