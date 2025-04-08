#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int r = 0, t = 0, b = 0;
    int movimentoCompleto = 1;
    
    //Movimento da Rainha
    while ( r <= 8) {
        if (r == 0) {
            printf("Movimento da Rainha!\n");
            r++;
        }
        else {
            printf("Esquerda\n");
            r++;
        }
    }

    // Movimento da Torre
    do {
        if ( t == 0) {
            printf("Movimento da Torre!\n");
            t++;
        }
        else {
            printf("Direita\n");
            t++;
        }
    } 
    while (t <= 5);

    // Movimento do Bispo
    for ( b = 0; b <= 5; b++) {
        if (b == 0) {
            printf("Movimento do Bispo!\n");
        }
        else {
            printf("cima-direita\n");
        }   
    }

    // Movimento do Cavalo
    while (movimentoCompleto--){

        for (int c = 0; c < 2; c++) {
            printf("Baixo!\n");
            }
        printf("Esquerda!\n");
    }

    return 0;
}
