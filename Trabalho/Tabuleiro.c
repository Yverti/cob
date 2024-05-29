#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 5
#define NUM_SHIPS 3

// Estrutura para representar uma posição no tabuleiro
typedef struct {
    int x;
    int y;
} Position;

// Estrutura para representar um navio
typedef struct {
    Position positions[BOARD_SIZE];
    int size;
} Ship;

int main() {
    char board[BOARD_SIZE][BOARD_SIZE];
    Ship ships[NUM_SHIPS];
    int num_attacks = 0;
    char choice;

    // Inicialização do tabuleiro com espaços vazios ('~')
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = '~';
        }
    }

    // Posicionamento aleatório dos navios
    srand(time(NULL));
    for (int i = 0; i < NUM_SHIPS; i++) {
        int x, y;
        int overlap;
        do {
            overlap = 0;
            x = rand() % BOARD_SIZE;
            y = rand() % BOARD_SIZE;
            // Verifica se a posição já está ocupada
            for (int j = 0; j < i; j++) {
                if (ships[j].positions[0].x == x && ships[j].positions[0].y == y) {
                    overlap = 1;
                    break;
                }
            }
        } while (overlap);
        ships[i].positions[0].x = x;
        ships[i].positions[0].y = y;
    }

    printf("Bem-vindo ao jogo Batalha Naval!\n");

    do {
        // Limpa a tela do terminal
        int deu_certo = system("clear");

        // Exibição do tabuleiro
        printf("\nTabuleiro:\n");
        printf("  0 1 2 3 4\n");
        for (int i = 0; i < BOARD_SIZE; i++) {
            printf("%d ", i);
            for (int j = 0; j < BOARD_SIZE; j++) {
                printf("%c ", board[i][j]);
            }
            printf("\n");
        }

        // Exibição do menu principal
        printf("\nMenu Principal:\n");
        printf("1. Atacar\n");
        printf("2. Sair do jogo\n");
        printf("Escolha uma opcao: ");
        deu_certo = scanf(" %c", &choice);

        switch (choice) {
            case '1':
                // Ataque ao tabuleiro
                int x, y;
                printf("\nDigite as coordenadas do seu ataque (x y): ");
                deu_certo = scanf("%d %d", &x, &y);
                if (x < 0 || x >= BOARD_SIZE || y < 0 || y >= BOARD_SIZE) {
                    printf("Coordenadas fora do tabuleiro. Tente novamente.\n");
                    continue;
                }

                // Verifica se houve acerto
                int hit = 0;
                for (int i = 0; i < NUM_SHIPS; i++) {
                    if (ships[i].positions[0].x == x && ships[i].positions[0].y == y) {
                        board[x][y] = 'X';
                        printf("Voce atingiu um navio!\n");
                        hit = 1;
                        break;
                    }
                }
                if (!hit) {
                    printf("Voce atingiu a agua.\n");
                    board[x][y] = 'O';
                }
                num_attacks++;
                break;
            case '2':
                printf("Saindo do jogo...\n");
                break;
            default:
                printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
        }

        // Verifica se todos os navios foram destruídos
        int ships_remaining = 0;
        for (int i = 0; i < NUM_SHIPS; i++) {
            if (board[ships[i].positions[0].x][ships[i].positions[0].y] != 'X') {
                ships_remaining++;
            }
        }
        if (ships_remaining == 0) {
            printf("Voce destruiu todos os navios! Parabens!\n");
            break;
        }

        // Aguarda o usuário pressionar Enter antes de continuar
        printf("\nPressione Enter para continuar...");
        while(getchar() != '\n');
        getchar();

    } while (choice != '2');

    return 0;
}
