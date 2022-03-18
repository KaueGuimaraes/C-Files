// Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertidade em
// graus Fahrenheit. A fórumula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura
// em Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int c;
    int f;

    printf("Informe um valor em graus Celsius C");
    scanf("%d", &c);

    f = c * (9.0/5.0) + 32.0;

    printf("C%d -> F%d", c, f);
    printf("\n");

    system("pause");
    return 0;
}
