// Faça um programa que converta uma letra maiúsculo em letra minúscula. Use a tabela ASCII
// para isso.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char l = 'a';

    printf("Informe uma letra do alfabeto minuscula: ");
    scanf("%c", &l);
    
    putchar(l - 32);
    printf("\n");

    system("pause");
    return 0;
}
