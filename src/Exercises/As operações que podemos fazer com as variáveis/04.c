// Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, n4, r;

    printf("Informe 4 valores reais: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    r = (n1 + n2 + n3 + n4) / 4;

    printf("A media aritmetica dos valores informados e de: %f", r);
    printf("\n");

    system("pause");
    return 0;
}
