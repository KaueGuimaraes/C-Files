// Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma
// taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o
// valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido
// do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará
// uma mensagem de erro.
//
// Estado      MG      SP      RJ      MS
// Imposto     7%      12%     15%     8%

#include <stdio.h>
#include <stdlib.h>

int main() {
    int perc, est;
    float val, final_val;

    printf("Informe o valor do produto: ");
    scanf("%f", &val);

    printf("Informe o estado (1-MG / 2-SP / 3-RJ / 4-MS): ");
    scanf("%d", &est);

    switch (est) {
        case 1: // MG
            perc = 7;
            break;

        case 2: // SP
            perc = 12;
            break;
        
        case 3: // RJ
            perc = 15;
            break;

        case 4: // MS
            perc = 8;
            break;

        default:
            perc = 0;
            break;
    }
    final_val = val + ((val / 100) * perc);
    if (perc == 0) printf("Estado invalido");
    else printf("O valor final do produto sera R$%f", final_val);
    printf("\n");

    system("pause");
    return 0;
}