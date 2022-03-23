// Faça um programa que leia o salário de um trabalhador e o valor da prestação de um emprés-
// timo. Se a prestação:
// - For maior que 20% do salário, imprima: "Empréstimo não concedido".
// - Caso contrário, imprima: "Empréstimo concedido".

#include <stdio.h>
#include <stdlib.h>

int main() {
    float sal, pres;

    printf("Informe o salario: ");
    scanf("%f", &sal);
    
    printf("Informe o valor da prestacao: ");
    scanf("%f", &pres);

    if(pres > (sal / 100) * 20) printf("Emprestimo nao concedido"); // Se a prestação for mais que 20% do salário
    else printf("Emprestimo concedido"); // Se não
    printf("\n");

    system("pause");
    return 0;
}