// Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse
// número, com exceção dele próprio. Exemplo: A soma dos divisores do número 66 é 1 + 2 +
// 3 + 6 + 11 + 22 + 33 = 78

#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0;
    int n = -1;

    while(n < 0) {
        printf("Informe um numero inteiro positivo: ");
        scanf("%d", &n);
    }

    for(int i = 1; i < n; i++) {
        if(n % i == 0) sum += i;
    }

    printf("A soma dos divisores de %d e: %d", n, sum);
    printf("\n");

    system("pause");
    return 0;
}