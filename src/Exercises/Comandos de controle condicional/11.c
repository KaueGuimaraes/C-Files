// Faça um programa que informe o mês de acordo com o número digitado pelo usuário. Exemplo:
// Entrada = 4. Saída = Abril.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Informe o mes do ano: ");
    scanf("%d", &n);

    if(n == 1) printf("%d - Janeiro", n);
    else if(n == 2) printf("%d - Fevereiro", n);
    else if(n == 3) printf("%d - Marco", n);
    else if(n == 4) printf("%d - Abril", n);
    else if(n == 5) printf("%d - Maio", n);
    else if(n == 6) printf("%d - Junho", n);
    else if(n == 7) printf("%d - Julho", n);
    else if(n == 8) printf("%d - Agosto", n);
    else if(n == 9) printf("%d - Setembro", n);
    else if(n == 10) printf("%d - Outubro", n);
    else if(n == 11) printf("%d - Novembro", n);
    else if(n == 12) printf("%d - Dezembro", n);
    else printf("Valor invalido");
    printf("\n");

    system("pause");
    return 0;
}