// Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima
// o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero,
// e, apartir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns
// termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int fibonacci, n = -1;
    int n1 = 0;
    int n2 = 1;

    while(n < 0) {
        printf("Informe um valor inteiro: ");
        scanf("%d", &n);
    }

    if(n == 0 || n == 1) {
        printf("%d", n);
        return 0;
    }

    for(int i = 2; i <= n; i ++) {
        fibonacci = n1 + n2;
        n1 = n2;
        n2 = fibonacci;
    }
    printf("%d", fibonacci);

    system("pause");
    return 0;
}