// Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação
// ciêntífica.

#include <stdio.h>
#include <stdlib.h>

/*int main() {
    double n; // Crio uma variável decimal

    printf("Digite um valor do tipo double: "); // Informo o usuário
    scanf("%lf", &n); // Espero retorno do mesmo

    short int cont = 0; // Crio uma varíavel inteira e curta
    double new_n = n; // Crio uma nova variável sendo ela uma cópia de n, o valor informado pelo usuário
    while(new_n < 1 | new_n > 9) { // Enquanto o new_n tiver mais casas decimais que 1
        if(n < 1) { // Se for negativo
            new_n *= 10; // Multiplico
            cont--; // Adiciono a contagem
        }else if(n > 9) { // Se for positivo
            new_n /= 10; // Divido
            cont++; // Subtraio a contagem
        } // Finalização do escopo
    } // Fecho o escopo

    printf("Valor inserido: %lfe%d", new_n, cont); // Informo os valores obtidos
    printf("\n"); // Pulo uma linha por organização

    system("pause"); // Espero retorno antes de finalizar o programa
    return 0; // Finalizo o programa
}*/

// PS: Eu não consegui resolver o exercício com os conhecimentos passados nesse capítulo e tive
// que ultilizar os aprendidos em outras linguagens. Estou curioso para ver como seria uma resolução
// diferente desta.

int main() {
    double n; // Crio uma variável decimal

    printf("Digite um valor do tipo double: "); // Informo o usuário
    scanf("%lf", &n); // Espero retorno do mesmo

    printf("Valor inserido: %e", n);
    printf("\n"); // Pulo uma linha por organização

    system("pause"); // Espero retorno antes de finalizar o programa
    return 0; // Finalizo o programa
}

// x2 PS: Acabei descobrindo pesquisando no livro o quão simples era. Acabei conseguindo fazer.