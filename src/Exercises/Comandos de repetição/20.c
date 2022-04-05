// Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o valor E, conforme
// a fómula a seguir:
//
// E = (1/1!) + (1/2!) + (1/3!) + ... + (1/n!)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, last, now, n = -1;
    float e = 0;

    while(n < 0) {
        printf("informe um valor inteiro: ");
        scanf("%d", &n);
    }

    for(i = 1, e = 0, last = 1; i <= n; i++){
        for(j = i; j <= i; j++){
            now = last * j;
            last = now;
        }
        e += 1 / (float) now;
    }

    printf("%f", e);

    system("pause");
    return 0;
}

// Não faço ídeia do que fazer, não sei o que significa "!" em matemática. Por isso grande parte da resolução
// deste programa não é originalmente meu, ou seja, peguei na internet.