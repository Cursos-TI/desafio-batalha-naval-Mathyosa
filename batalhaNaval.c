#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com zeros
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Imprime cabeçalho das colunas
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", linha[j]);
    }
    printf("\n");

    // Imprime o tabuleiro com valores 0
    for (int i = 0; i < 10; i++) {
        printf("%2d|", i + 1); // Imprime o número da linha
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nTabuleiro BATALHA NAVAL\n");

    return 0;
}


   






