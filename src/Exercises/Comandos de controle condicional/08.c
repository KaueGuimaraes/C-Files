// Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes
// categorias:
//
//  Categoria       Idade
//  Infantil A      5-7
//  Infantil B      8-10
//  Juvenil A       11-13
//  Juvenil B       14-17
//  Sênior          maiores de 18 anos

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Sua classificacao como nadador e: ");
    if(idade >= 5 && idade <= 7) printf("Infantil A");
    else if(idade >= 8 && idade <= 10) printf("Infantil B");
    else if(idade >= 11 && idade <= 13) printf("Juvenil A");
    else if(idade >= 14 && idade <= 17) printf("Juvenil B");
    else if (idade >= 18) printf("Senior");
    else printf("Sem classificacao");
    printf("\n");

    system("pause");
    return 0;
}