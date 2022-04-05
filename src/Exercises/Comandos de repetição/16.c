// Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da
// série harmônica. Ou seja:
//
// Hn = 1 + (1/2) + (1/3) + (1/4) ... + (1/n)
//
// Apresente um programa que calcule o valor de qualquer Hn.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float hn = 1.0;

    do{
        printf("Informe um numero para se calcular sua Serie Harmonica: ");
        scanf("%d", &n);
    }while(n < 2);

    for(int i = 2; i <= n; i++) {
        hn += ((float)1 / (float)i);
    }

    printf("A Serie Harmonica do numero %d e: %f", n, hn);

    return 0;
}