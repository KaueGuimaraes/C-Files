// Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas
// do chamado triângulo de Floyd:
// 1
// 2 3
// 4 5 6
// 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, save_c = 1, l = 1;
    // N: Número solicitado pelo usuário
    // Save_c: Será um back-up do valor de c
    // L: Será a contagem das linhas

    printf("Informe o numero de linhas desejado a se ver do Triangulo de Floyd: "); // Peço ao usuário
    scanf("%d", &n); // Solicito

    printf("\n"); // Linha de organização
    for(l = 1; l <= n; l++) { // l será cada linha do Triângulo de Floyd
        for(int c = save_c, cont = 1; cont <= l; c++, cont++) { // A cada linha pegará o último c e adicionará 1. Isto é, o c será uma sequência de números de 1 em 1. A cada N linha mostrará N números, ou seja, na 10° será informado 10 valores numéricos.
            printf("%d ", c); // Mostrarei o valor
            save_c = c + 1; // Sempre farei o back-up de c na variável. Sempre adicionando +1 por conta de na próxima linha iniciar com +1 ao valor anterior.
        } // Fim do Laço for
        printf("\n"); // Quebra de linha para a próxima linha do Triângulo
    } // Fim do laço for
    printf("\n"); // Linha de organização

    system("pause"); // Espero o usuário dar um sinal
    return 0; // Programa executado com sucesso!!
}

// A representação feita pela explicação do livro é:
// 1
// 2 3
// 4 5 6
// 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21
//
// Qual está errada por conta de pular do 6(na 3° linha) para o 8(na 4° linha).
// O Triângulo de Floyd segue o padrão de adição número + 1, ou seja, de 1 em 1.