// Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
// média.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, s = 0;
    int meta = 10;
    float m;

    for(int i = 1; i <= meta;) {
        printf("Informe o numero inteiro %d: ", i);
        scanf("%d", &n);

        if(n >= 0) {
            s += n;
            i++;
        }
    }
    m = (s/meta) + (0.1 * (s%meta));

    printf("A media dos valores informados e igual a: %f", m);
    printf("\n");

    system("pause");
    return 0;
}

// Mesma situação do exercício 08