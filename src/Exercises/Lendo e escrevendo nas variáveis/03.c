// Escreva um programa que leia um número inteiro e depois imprima a mensagem "Valor lido:",
// seguido do valor inteiro. Use apenas o comando printf().

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Digite um valo inteiro: ");
    scanf("%d", &n);

    printf("Valor lido: %d", n);
    printf("\n");

    system("pause");
    return 0;
}