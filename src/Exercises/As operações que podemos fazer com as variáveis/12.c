// Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O volume de
// um cilindro circular é calculado por meio da seguinte fórmula:
//
// V = π * raio² * altura,
//
// em que π = 3.141592

#include <stdio.h>
#include <stdlib.h>

int main() {
    float v, pi = 3.141592;
    int a, r; // Altura e raio

    printf("Informe a altura do cilindro: ");
    scanf("%d", &a);

    printf("Informe o raio do mesmo cilindro: ");
    scanf("%d", &r);

    v = pi * (r * r) * a;

    printf("O volume de tal cilindro e equilavente a %f", v);
    printf("\n");

    system("pause");
    return 0;
}