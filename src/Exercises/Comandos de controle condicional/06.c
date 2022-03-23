// Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
// utilizando as seguintes fórmulas (em que "h" corresponde à altura):
// - Homens: (72,7 * h) - 58
// - Mulheres: (62,1 * h) - 44,7

#include <stdio.h>
#include <stdlib.h>

int main() {
    char s;
    float h;

    printf("Informe seu sexo(m/f): ");
    scanf("%c", &s);

    printf("Informe sua altura: ");
    scanf("%f", &h);

    switch (s) {
        case 'm':
            printf("Seu peso ideal seria %f", (72.7 * h) - 58);
            break;
        
        case 'f':
            printf("Seu peso ideal seria %f", (62.1 * h) - 44,7);
    }
    printf("\n");

    system("pause");
    return 0;
}