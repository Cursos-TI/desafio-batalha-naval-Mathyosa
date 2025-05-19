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

    //Posiciona os navios horizontais
    
    tabuleiro[0][0] = 3; // Navio 1
    tabuleiro[0][1] = 3; // Navio 1
    tabuleiro[0][2] = 3; // Navio 1
    tabuleiro[1][0] = 3; // Navio 2
    tabuleiro[1][1] = 3; // Navio 2
    tabuleiro[1][2] = 3; // Navio 2

    //Posiciona os navios diagonais
    
    tabuleiro[3][1] = 3; // Navio 3
    tabuleiro[4][2] = 3; // Navio 3
    tabuleiro[5][3] = 3; // Navio 3
    
    tabuleiro[9][3] = 3;  // Navio 4
    tabuleiro[8][4] = 3; // Navio 4
    tabuleiro[7][5] = 3; // Navio 4
    



    // Imprime o tabuleiro com os navios
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", linha[j]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d|", i + 1); // Imprime o número da linha
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Áreas de cone no tabuleiro

    tabuleiro[4][7] = 5;
    tabuleiro[5][6] = 5;
    tabuleiro[5][7] = 5;
    tabuleiro[5][8] = 5;
    tabuleiro[6][5] = 5;
    tabuleiro[6][6] = 5;
    tabuleiro[6][7] = 5;
    tabuleiro[6][8] = 5;
    tabuleiro[6][9] = 5;
    tabuleiro[6][10] = 5;
    
    //Áreas de cruz no tabuleiro

    tabuleiro[0][7] = 5;
    tabuleiro[1][5] = 5;
    tabuleiro[1][6] = 5;
    tabuleiro[1][7] = 5;
    tabuleiro[1][8] = 5;
    tabuleiro[1][9] = 5;
    tabuleiro[2][7] = 5;


    //Áreas de octaedro no tabuleiro

    tabuleiro[6][1] = 5;
    tabuleiro[7][1] = 5;
    tabuleiro[7][2] = 5;
    tabuleiro[8][1] = 5;

   
    
    // Imprime o tabuleiro com os navios e áreas de habilidade

    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", linha[j]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d|", i + 1); // Imprime o número da linha
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");



    return 0;
}



   






