#include <stdio.h>

int main() {

   char linha[10] = {'A', 'B','C','D','E','F','G','H','I','J'};
   int coluna = 10; // Número de colunas
   int tabuleiro[10][coluna]; 

   // Tabuleiro inicializado com zeros
   for (int i = 0; i < 10; i++) {
       for (int j = 0; j < 10; j++) {
           tabuleiro[i][j] = 0;
       }

    }

    // Preenche o tabuleiro com números de 1 a 10

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = (i * coluna) + (j + 0);
        }
    }
    // Imprime o tabuleiro na tela

    printf("  ");
    for (int j = 0; j <= 10; j++) {
        printf("%c ", linha[j]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1); // Imprime o número da linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Tabuleiro BATALHA NAVAL");
    printf("\n");

   


   
    return 0;
}


   






