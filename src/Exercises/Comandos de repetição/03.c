// Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
// naturais ímpares.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, c, i;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    c = 0; // O contador será igual a 0
    i = 0; // A quantidade de números ímpares encontrados é igual a 0
    while(1) { // Enquanto verdadeiro
        if(i >= n) break; // Se a quantidade de números ímpares for igual ao número N. Quebra o laço While
        if(c % 2 != 0) { // Se o contador não for divisível por 2
            printf("%d\n", c); // Mostra-o
            i++; // Mais 1 número ímpar encontrado
        }
        c++; // Adiciona ao contador
    }

    system("pause");
    return 0;
}