// Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são
// múltiplos de 3 ou 5.

#include <stdio.h.>
#include <stdlib.h>

int main() {
    int q, sum = 0;
    for(int i = 1; i < 1000; i++) { // Começando do 0 até 999 adicionando de 1 em 1
        if((i % 3 == 0) || (i % 5 == 0)) { // Se for divisível por 3 ou por 5
            if(q == 0) printf("%d", i); // Se for o primeiro número divisível. Mostrarei-o
            else printf(" + %d", i); // Se não. Mostrarei-o
            sum += i; // Somarei-o
            q++; // Adicionarei ao contador
        }
    }

    printf(" = %d", sum); // Mostrarei o resultado
    printf("\n");

    system("pause");
    return 0;
}