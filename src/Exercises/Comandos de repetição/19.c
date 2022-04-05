// Faça um programa que calcule e escreva o valor de S:
//
// S = (1/1) + (3/2) + (5/3) + (7/4) + ... + (99/55)

#include <stdio.h>
#include <stdlib.h>

int main() {
    float s = 0;

    printf("(1/1)");
    for(int numerador = 1, denominador = 1; numerador <= 99; numerador += 2, denominador += 1) {
        s += (numerador/denominador);
        printf(" + (%d/%d)", numerador, denominador);
    }
    printf(" = %f", s);
    
    system("pause");
    return 0;
}

// Não é possível chegar até (99/55) com esse ciclo, somente até (99/50)