// Faça um programa que leia os coeficientes de uma equação do segundo grau. Em seguida, calcule
// e mostre as raízes dessa equação, lembrando que as raízes são calculadas como
//
// x = (-b ± raiz de (Δ)) / (2 * a)
//
// em que Δ = b² - 4 * a * c e ax² + bx + c = 0 representa uma equação do segundo grau. A variável
// a tem de ser diferente de zero. Caso seja igual, imprima a mensagem "Não é equação de segundo
// grau". Do contrário imprima:
// - Se Δ < 0, não existe real. Imprima a mensagem "Não existe raiz".
// - Se Δ = 0, existe uma raíz real. Imprima a raiz e a mensagem "Raiz única".
// - Se Δ > 0, existem duas raízes reais. Imprima as raízes.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float delta, result1, result2;
    float a, b, c;

    printf("Informe o valor de A: ");
    scanf("%f", &a);

    printf("Informe o valor de B: ");
    scanf("%f", &b);

    printf("Infomre o valor de C: ");
    scanf("%f", &c);

    if(a != 0) {
        delta = (b * b) - (4 * a * c); // Fórmula de Delta
        result1 = ((0 - b) + sqrt(delta)) / (2 * a); // Bhaskara +
        result2 = ((0 - b) - sqrt(delta)) / (2 * a); // Bhaskara -

        if(delta < 0) printf("Nao existe raiz");
        else if(delta == 0) {
            printf("Raiz unica "); printf("S = {%f}", result1);
        }else if(delta > 0) {
            printf("Existem duas raizes reais "); printf("S = {%f, %f}", result1, result2);
        }

        
    }else printf("O valor de A e invalido");
    printf("\n");

    system("pause");
    return 0;
}