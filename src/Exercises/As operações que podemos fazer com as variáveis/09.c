// Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R = G
// * π/180, sendo G o ângulo em graus e R em radianos e π = 3.141592.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int g;
    float r, pi = 3.141592;

    printf("Informe um angulo em graus: ");
    scanf("%d", &g);

    r = g * pi/180;

    printf("O valor convertido em radianos e %f", r);
    printf("\n");

    system("pause");
    return 0;
}
