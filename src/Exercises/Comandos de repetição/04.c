// Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando
// números maiores que 0.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int c = 1; // Contador
    int d = 0; // Números divisíveis
    int n = 3; // Número

    while(1) {
        if(d > 5) break;
        if(c % n == 0) {
            printf("%d\n", c);
            d++;
        }
        c++;
    }

    system("pause");
    return 0;
}