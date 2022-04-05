// Faça um programa que receba um número inteiro maior do que 1 e verifique se o número
// fornecido é primo ou não.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, d = 0;

    while(n <= 1) {
        printf("Informe um numero inteiro: ");
        scanf("%d", &n);
    }

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            d = 1;
            break;
        }
        d = 0;
    }

    if(d) printf("O numero %d nao e um numero primo", n);
    else printf("O numero %d e um numero primo", n);

    system("pause");
    return 0;
}