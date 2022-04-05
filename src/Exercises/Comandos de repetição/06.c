// Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando
// em 0. Mostre uma mensagem "FIM!" após a contagem.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    for(int i = 10; i >= 0; i--) {
        printf("%d\n", i);
        sleep(1);
    }
    printf("FIM!");
    printf("\n");


    return 0;
}