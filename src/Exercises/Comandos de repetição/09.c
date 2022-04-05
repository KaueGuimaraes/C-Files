// Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float n, maior, menor;

    for(int i = 1; i <= 10; i++) {
        printf("Informe o valor %d: ", i);
        scanf("%f", &n);

        if(i == 1) { // Se for a primeira execução
            maior = menor = n; // O maior e o menor será igual a n
        } else { // Se não
            if(n > maior) maior = n; // Se o n for maior que o maior, ele será o maior
            else if(n < menor) menor = n; // Se o n for menor que o menor, ele será o menor
        }
    }
    printf("O Maior valor lido foi: %f\n", maior);
    printf("O Menor valor lido foi: %f\n", menor);

    system("pause");
    return 0;
}