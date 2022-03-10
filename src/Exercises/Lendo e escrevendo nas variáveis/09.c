// Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para
// isso. Em seguida, imprima os valores lidos na ordem inversa em que foram lidos.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float a;
    float b;
    
    printf("Informe dois valores decimais: ");
    scanf("%f %f", &a, &b); // Como no exercício anterior os valores serão lidos na mesma linha separadas por um espaço " ", ou em linhas diferentes

    printf("Os valores inseridos na ordem reversa sao: %f%f", b, a);
    printf("\n");
    
    system("pause");
    return 0;
}