// Escreva um programa que leia certa quantidade de números, imprima o maior deles e quantas
// vezes o maior número foi lido. A quantidade de números a serem lidos deve ser fornecida pelo
// usuário.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = -1, c = 0;
    float v, maior = 0;

    while(n < 0) {
        printf("Quantos numeros deseja que sejam lidos? ");
        scanf("%d", &n);
    }

    for(int i = 1; i <= n; i++) {
        printf("Informe o %d valor: ", i);
        scanf("%f", &v);

        if(i == 1){
            maior = v;
            c = 1;
        }
        else {
            if(v > maior) {
                maior = v;
                c = 1;
            }else if(v == maior) c++;
        }
    }

    printf("O maior valor informado foi %f, tendo sido informado %d vez", maior, c);
    if(c != 1) printf("es");
    printf("\n");

    return 0;
}