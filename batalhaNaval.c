#include <stdio.h>

/*
 * DESAFIO BATALHA NAVAL - NÍVEL NOVATO
 * Foco: Matrizes, posicionamento manual e exibição de coordenadas.
 

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
*/

#include <stdio.h>

/**
 * DESAFIO BATALHA NAVAL - NÍVEL AVENTUREIRO
 * Foco: Matriz 10x10, Navios Diagonais e Exibição Completa.
 */

int main() {
    // Definição do tamanho do tabuleiro conforme requisito
    #define TAMANHO 10
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // --- POSICIONAMENTO DOS NAVIOS ---

    // 1. Navio Horizontal (4 casas na linha 2)
    for (int j = 1; j <= 4; j++) tabuleiro[2][j] = 3;

    // 2. Navio Vertical (4 casas na coluna 8)
    for (int i = 5; i <= 8; i++) tabuleiro[i][8] = 3;

    // 3. Navio Diagonal 1 (3 casas - Superior Esquerda para Inferior Direita)
    // Coordenadas: (1,1), (2,2), (3,3)
    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][i] = 3;
    }

    // 4. Navio Diagonal 2 (3 casas - Superior Direita para Inferior Esquerda)
    // Coordenadas: (7,2), (8,1), (9,0)
    for (int i = 0; i < 3; i++) {
        tabuleiro[7 + i][2 - i] = 3;
    }

    // --- EXIBIÇÃO DO TABULEIRO COMPLETO ---
    printf("--- TABULEIRO BATALHA NAVAL (10x10) ---\n\n");
    
    // Cabeçalho das colunas para facilitar a leitura
    printf("  ");
    for (int j = 0; j < TAMANHO; j++) printf("%d ", j);
    printf("\n");

    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", i); // Índice da linha
        for (int j = 0; j < TAMANHO; j++) {
            // Exibe 3 para navio e 0 para água
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
