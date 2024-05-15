#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 3

char tabuleiro[LINHAS][COLUNAS];

// Função para inicializar o tabuleiro
void inicializar_tabuleiro() {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = '-';
        }
    }
}

// Função para imprimir o tabuleiro
void imprimir_tabuleiro() {
    printf("\n  0 1 2\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("%d ", i);
        for (int j = 0; j < COLUNAS; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para verificar se o tabuleiro está cheio
int tabuleiro_cheio() {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (tabuleiro[i][j] == '-') {
                return 0; // Tabuleiro não está cheio
            }
        }
    }
    return 1; // Tabuleiro está cheio
}

// Função para verificar se alguém ganhou o jogo
char verificar_vencedor() {
    // Verificar linhas e colunas
    for (int i = 0; i < LINHAS; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != '-') {
            return tabuleiro[i][0]; // Linha i venceu
        }
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != '-') {
            return tabuleiro[0][i]; // Coluna i venceu
        }
    }

    // Verificar diagonais
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != '-') {
        return tabuleiro[0][0]; // Diagonal principal venceu
    }
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != '-') {
        return tabuleiro[0][2]; // Diagonal secundária venceu
    }

    return ' '; // Não há vencedor
}

// Função para a jogada do computador
void jogada_computador() {
    int linha, coluna;
    do {
        linha = rand() % LINHAS;
        coluna = rand() % COLUNAS;
    } while (tabuleiro[linha][coluna] != '-');
    tabuleiro[linha][coluna] = 'O';
}

int main() {
    int linha, coluna;
    char vencedor;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Inicializar o tabuleiro
    inicializar_tabuleiro();

    printf("Bem-vindo ao Jogo da Velha!\n");
    printf("Voce sera X e o computador sera O.\n");

    // Loop do jogo
    while (1) {
        // Jogada do jogador
        do {
            printf("\nSeu turno. Insira a linha e coluna (0-2): ");
            scanf("%d %d", &linha, &coluna);
        } while (linha < 0 || linha >= LINHAS || coluna < 0 || coluna >= COLUNAS || tabuleiro[linha][coluna] != '-');
        tabuleiro[linha][coluna] = 'X';

        // Imprimir o tabuleiro atualizado
        imprimir_tabuleiro();

        // Verificar se o jogador venceu
        vencedor = verificar_vencedor();
        if (vencedor == 'X') {
            printf("\nVoce venceu! Parabens!\n");
            break;
        } else if (vencedor == 'O') {
            printf("\nO computador venceu!\n");
            break;
        }

        // Verificar se o jogo terminou em empate
        if (tabuleiro_cheio()) {
            printf("\nO jogo terminou em empate!\n");
            break;
        }

        // Jogada do computador
        jogada_computador();

        // Imprimir o tabuleiro atualizado
        imprimir_tabuleiro();

        // Verificar se o computador venceu
        vencedor = verificar_vencedor();
        if (vencedor == 'X') {
            printf("\nVoce venceu! Parabens!\n");
            break;
        } else if (vencedor == 'O') {
            printf("\nO computador venceu!\n");
            break;
        }

        // Verificar se o jogo terminou em empate
        if (tabuleiro_cheio()) {
            printf("\nO jogo terminou em empate!\n");
            break;
        }d
    }

    return 0;
}

