// Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 50;
    int c = 1; // C: Contador
    int s, p = 0;  // S: Soma; P: Números pares encontrados

    while(1) { // Enquanto verdadeiro
        if(p >= n) break; // Se o número de pares encontrados for maior ou igual ao que foi solicitado. Quebra de laço
        if(c % 2 == 0) { // Se o contador for divisível por 2
            if(p == 0) printf("%d", c); // Se for o primeiro número par encontrado. Mostra-o na soma
            else printf(" + %d", c); // Se não. Mostra-o na soma
            
            s += c; // Soma-o
            p++; // Adiciona mais um número par encontrado 
        }
        c++; // Adiciona ao contador
    }
    printf(" = %d", s); // Mostra a soma total
    printf("\n");

    system("pause");
    return 0;
}

// Dei uma pesquisada em outras resoluçõe e percebi como fazer o uso dinâmico para descobrir oa valores
// dos números ímpares e pares, isso utilizando o comando for. Acaba ficando bem mais dinâmico e com uma
// execução mais rápida.
//
// Como é possível observar em: https://github.com/misaelrezende/Exercicios-do-Livro-Linguagem-C-Completa-e-Descomplicada/blob/master/Capitulo%205/ex05.c
// 
// int main(){
//     int i, cont, soma = 0;
//     for(i = 2, cont = 0; cont < 50; i += 2, cont++){ // AQUI
//         soma += i;
//     }
//     printf("%d", soma);
//     return 0;
// }
//
// Na parte escrita "AQUI", é possível perceber o uso do i. Se determinarmos a variável i como um número ímpar e constantemente adicionarmos + 2 a esta varíavel, se obtém
// os seguintes número ímpares. A mesma coisa acontece quando se trata de números ímpares.