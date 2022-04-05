// Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os
// divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = -1;

    while(n < 0) {
        printf("Informe um numero inteiro positivo: ");
        scanf("%d", &n);
    }

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) printf("%d\n", i);
    }

    system("pause");
    return 0;
}