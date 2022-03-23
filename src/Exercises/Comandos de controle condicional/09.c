// Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir,
// verifique e mostre qual a classificação desta pessoa.
//
//  Altura                              Peso
//                      Até 60      Entre 60-90 (inclusive)     Acima de 90
//  Menor do que 1,20   A           D                           G
//  1,20-1,70           B           E                           H
//  Maior do que 1,70   C           F                           I

#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    float h, kg;

    printf("Informe sua altura: ");
    scanf("%f", &h);

    printf("Informe seu peso: ");
    scanf("%f", &kg);

    printf("Sua classificacao e: ");
    if(h < 1.20) {
        if(kg < 60) printf("A");
        else if(kg >= 60 && kg <= 90) printf("D");
        else printf("G");
    }else if(kg < 1.70) {
        if(kg < 60) printf("B");
        else if(kg >= 60 && kg <= 90) printf("E");
        else printf("H");
    }else {
        if(kg < 60) printf("C");
        else if(kg >= 60 && kg <= 90) printf("F");
        else printf("I");
    }
    printf("\n");

    system("pause");
    return 0;
}