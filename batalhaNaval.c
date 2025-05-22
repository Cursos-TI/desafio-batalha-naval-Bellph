#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 3, 0, 0, 0, 0, 0, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 3, 3, 3, 0},
        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    for (int i = 0; i <= 9; i++){
        for (int j = 0; j <= 9; j++){
            printf(" %d ", tabuleiro[i][j]);
        }
    printf("\n");
     }

    return 0;
}
