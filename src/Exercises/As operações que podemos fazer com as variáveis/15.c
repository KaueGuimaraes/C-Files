// Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e
// mostre o número formado pelos dígitos invertidos do número lido. Exemplo: Número lido: 123
// Número gerado = 321

#include <stdio.h>
#include <stdlib.h>

int main() {
    char n1, n2, n3;

    printf("Informe um numero que contenha 3 digitos: ");
    scanf("%c%c%c", &n1, &n2, &n3); // Dessa maneira não sei se está realmente correta, isso se dá por conta de eu estar interpretando o número como uma letra.

    printf("Numero invertido %c%c%c", n3, n2, n1);
    printf("\n");

    system("pause");
    return 0;
}