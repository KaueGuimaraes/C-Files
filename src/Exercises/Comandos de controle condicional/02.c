// Faça um programa que leia dois números e mostre o mais deles. Se, por acaso, os dois números
// forem iguais, imprima a mensagem "Números iguas".

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;

    printf("Informe o primeiro inteiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo inteiro numero: ");
    scanf("%d", &n2);

    if(n1 > n2) printf("%d > %d. O primeiro numero e o maior", n1, n2);
    else {
        if(n2 > n1) printf("%d > %d. O segundo numero e o maior", n2, n1);
        else printf("%d = %d. Numeros iguais", n1, n2);
    }
}