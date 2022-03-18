// Leia do valor do raio de um círculo. Calcule e imprima a área do cícrulo correspondente. A área
// do círculo é A = π* raio², sendo π = 3.131592.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, pi = 3.131592;
    int r;

    printf("Informe o raio de um circulo: ");
    scanf("%d", &r);

    a = pi * (r * r);

    printf("A area do circulo correspondente e %f", a);
    printf("\n");

    system("pause");
    return 0;
}