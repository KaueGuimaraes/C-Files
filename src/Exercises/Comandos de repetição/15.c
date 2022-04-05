// Elabore um programa que faça a leitura de vários números inteiros até que se digite um número
// negativo. O programa tem de retornar o maior e o menor número lido.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, menor, maior;
    int cont = 0;
    
    do{
        printf("Informe um numero inteiro negativo: ");
        scanf("%d", &n);

        if(cont == 0) maior = menor = n; // Se for a primeira execução. O maior e o menor será igual ao valor
        else {
            if(n > maior) maior = n; // Se o valor for maior que o maior. Ele será o maior
            else if(n < menor) menor = n; // Se o valor for menor que o menor. Ele será o menor
        }
        cont++;
    }while(n >= 0);

    printf("O Maior valor informado foi: %d\n", maior);
    printf("O Menor valor informado foi: %d\n", menor);

    system("pause");
    return 0;
}