// Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
// - O número digitado ao quadrado.
// - A raiz quadrada do número digitado.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float n;

    printf("Informe um numero: ");
    scanf("%f", &n);

    if(n > 0) {
        //printf("%d² = ", n, n * n);
        printf("%f elevado a 2 = %f\n", n, pow(n, 2));
        printf("raiz quadrada de %f = %f", n, sqrt(n));
    }else printf("%f e negativo", n);
    printf("\n");

    system("pause");
    return 0;
}