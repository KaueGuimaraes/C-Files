// Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros
// por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float km;
    double m;

    printf("Informe uma velocidade em km/h: ");
    scanf("%f", &km);

    m = km / 36;

    printf("Em m/s o valor se resulta em: %f", m);
    printf("\n");

    system("pause");
    return 0;
}
