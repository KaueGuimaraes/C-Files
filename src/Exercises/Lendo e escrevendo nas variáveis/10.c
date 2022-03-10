// Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros),
// Em seguida, imprima os valores lidos separados por uma barra (\).

#include <stdio.h>
#include <stdlib.h>

int main() {
    int dia;
    int mes;
    int ano;

    printf("Informe o dia: ");
    scanf("%d", &dia);

    printf("Informe o mes: ");
    scanf("%d", &mes);

    printf("Informe o ano: ");
    scanf("%d", &ano);

    printf("%d/%d/%d", dia, mes, ano); // Data americana dia/mês/ano
    printf("\n");

    system("pause");
    return 0;
}