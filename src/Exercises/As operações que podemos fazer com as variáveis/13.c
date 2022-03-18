// Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
// h = raiz quadrada(a² + b²)
//
// Faça um programa que leia os valores de a e b, e calcule o valor da hiponetuna através da fórmula
// dada. Imprima o resultado.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, h;

    printf("Informe o cateto A de um triangulo: ");
    scanf("%d", &a);

    printf("Informe o cateto B do mesmo triangulo: ");
    scanf("%d", &b); // Não tem nada de errado no código, porém, por alguma causa ele só aguentou até aqui. Não consegui descobrir a causa
                    
    h = (a * a) + (b * b); // Hello. Quem fala aqui é o Kauê do futuro, eu acabei percebendo que tinha algo de muito errado! Eu havia esquecido de colocar o & antes da variável qual será declarada.

    printf("O valor da hiponetusa e a raiz quadrada de %d", h);
    printf("\n");

    system("pause");
    return 0;
}