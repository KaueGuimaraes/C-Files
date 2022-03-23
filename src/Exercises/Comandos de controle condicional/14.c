// Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas
// não simultaneamente pelos dois.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Informe um numero: ");
    scanf("%d", &n);

    printf("%d ", n);
    if(n % 3 == 0 && n % 5 == 0) printf("e divisivel pelos dois"); // Pelos dois
    else if(n % 3 == 0) printf("e divisivel somente por 3"); // Pelo 3
    else if(n % 5 == 0) printf("e divisivel somente por 5"); // Pelo 5
    else printf("nao e divisivel por nenhum dos dois numeros"); // Por nenhum
    printf("\n");

    system("pause");
    return 0;
}