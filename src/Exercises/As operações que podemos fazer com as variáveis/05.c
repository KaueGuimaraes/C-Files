// Faça um programa que calcula o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t tempo; // Como no livro
    struct tm *infotempo; // Também
    char texto[80]; // De novo
    time(&tempo); // Outravez
    infotempo = localtime(&tempo); // Novamente

    int old, r; // Declaro a idade e resposta
    int year = infotempo->tm_year + 1900; // Pego o ano da máquina

    printf("Quantos anos voce tem? "); // Mostro a pergunta ao usuário
    scanf("%d", &old); // Solicito

    r = year - old; // Calculo a resposta

    printf("Entao voce nasceu no ano de %d", r); // Informo-a
    printf("\n"); // Linha de organização

    system("pause"); // Espero retorno do usuário para continuar
    return 0; // Retorno 0 informando que ocorreu tudo conforme o planejado
}