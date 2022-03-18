// A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo
// que:
// i. O primeiro ganhador receberá 46% do total.
// ii. O segundo receberá 32% do total.
// iii. O terceiro receberá o restante.
//
// Calcule e imprima a quantia recebida por cada um dos ganhadores.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int value = 780000; // valor total
    float g1 = value / 100 * 46; // 46% do valor total
    float g2 = value / 100 * 32; // 32% do valor total
    float g3 = value - (g1 + g2); // O que sobrou

    printf("A importancia de R$780.000,00 sera dividida entre tres ganhadores de um concurso:");

    printf("\n1th (46%%): R$%f", g1);
    printf("\n2th (32%%): R$%f", g2);
    printf("\n3th (resto): R$%f", g3);
    printf("\n");

    system("pause");
    return 0;
}