#include <stdio.h>

/**
 * DESAFIO BATALHA NAVAL - NÍVEL NOVATO
 * Foco: Matrizes, posicionamento manual e exibição de coordenadas.
 */

int main() {
    // Definindo o tamanho do tabuleiro
    #define LINHAS 5
    #define COLUNAS 5

    // Inicializando o tabuleiro com 0 (água)
    int tabuleiro[LINHAS][COLUNAS] = {0};

    // --- POSICIONAMENTO DOS NAVIOS ---

    // Navio Horizontal: 3 unidades na linha 1, colunas 1, 2 e 3
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    // Navio Vertical: 3 unidades na coluna 4, linhas 2, 3 e 4
    tabuleiro[2][4] = 3;
    tabuleiro[3][4] = 3;
    tabuleiro[4][4] = 3;

    // --- EXIBIÇÃO DE COORDENADAS ---
    
    printf("Coordenadas do Navio Horizontal:\n");
    for (int j = 1; j <= 3; j++) {
        printf("Parte do navio em: Linha 1, Coluna %d\n", j);
    }

    printf("\nCoordenadas do Navio Vertical:\n");
    for (int i = 2; i <= 4; i++) {
        printf("Parte do navio em: Linha %d, Coluna 4\n", i);
    }

    // Visualização do Tabuleiro (opcional para clareza)
    printf("\nMapa do Tabuleiro (3 = Navio, 0 = Água):\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
