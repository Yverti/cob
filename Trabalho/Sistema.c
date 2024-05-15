#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USUARIOS 100
#define MAX_NOME 50

struct Usuario {
  char nome[MAX_NOME];
  int idade;
};

// Protótipos das funções
void cadastrarUsuario(struct Usuario usuarios[], int *numUsuarios);
void listarUsuarios(struct Usuario usuarios[], int numUsuarios);
void editarUsuario(struct Usuario usuarios[], int numUsuarios);
void excluirUsuario(struct Usuario usuarios[], int *numUsuarios);
void limparBuffer();

int main() {
  struct Usuario usuarios[MAX_USUARIOS];
  int numUsuarios = 0;
  bool sair = false;
  int opcao;

  while (!sair) {
    printf("\n=== Sistema de Cadastro de Usuários ===\n");
    printf("1. Cadastrar usuário\n");
    printf("2. Listar usuários cadastrados\n");
    printf("3. Editar usuário\n");
    printf("4. Excluir usuário\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: ");
    int deu_certo = scanf("%d", &opcao);
    limparBuffer();

    switch (opcao) {
    case 1:
      cadastrarUsuario(usuarios, &numUsuarios);
      break;
    case 2:
      listarUsuarios(usuarios, numUsuarios);
      break;
    case 3:
      editarUsuario(usuarios, numUsuarios);
      break;
    case 4:
      excluirUsuario(usuarios, &numUsuarios);
      break;
    case 5:
      printf("Saindo do sistema...\n");
      sair = true;
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
    }
  }

  return 0;
}

void cadastrarUsuario(struct Usuario usuarios[], int *numUsuarios) {
  if (*numUsuarios < MAX_USUARIOS) {
    printf("\nCadastrar novo usuário:\n");
    printf("Nome: ");
    fgets(usuarios[*numUsuarios].nome, MAX_NOME, stdin);
    usuarios[*numUsuarios].nome[strcspn(usuarios[*numUsuarios].nome, "\n")] =
        '\0'; // Remover o '\n'

    printf("Idade: ");
    int deu_certo = scanf("%d", &usuarios[*numUsuarios].idade);
    limparBuffer();
    if (deu_certo != 1 || usuarios[*numUsuarios].idade < 0) {
      printf("Entrada inválida. Tente novamente.\n");
      return;
    }

    printf("Usuário cadastrado com sucesso!\n");
    (*numUsuarios)++;
  } else {
    printf("Limite de usuários cadastrados atingido.\n");
  }
}

void listarUsuarios(struct Usuario usuarios[], int numUsuarios) {
  if (numUsuarios > 0) {
    printf("\nLista de usuários cadastrados:\n");
    for (int i = 0; i < numUsuarios; i++) {
      printf("Nome: %s, Idade: %d\n", usuarios[i].nome, usuarios[i].idade);
    }
  } else {
    printf("Nenhum usuário cadastrado.\n");
  }
}

void editarUsuario(struct Usuario usuarios[], int numUsuarios) {
  if (numUsuarios > 0) {
    printf("\nEditar usuário:\n");
    printf("Digite o número do usuário a ser editado (0-%d): ",
           numUsuarios - 1);
    int indice;
      int deu_certo = scanf("%d", &indice);
    limparBuffer();
    if (indice >= 0 && indice < numUsuarios) {
      printf("Novo nome: ");
      fgets(usuarios[indice].nome, MAX_NOME, stdin);
      usuarios[indice].nome[strcspn(usuarios[indice].nome, "\n")] =
          '\0'; // Remover o '\n'

      printf("Nova idade: ");
      int deu_certo = scanf("%d", &usuarios[indice].idade);
      limparBuffer();
      if (deu_certo != 1 || usuarios[indice].idade < 0) {
        printf("Entrada inválida. Tente novamente.\n");
        return;
      }

      printf("Usuário editado com sucesso!\n");
    } else {
      printf("Índice inválido.\n");
    }
  } else {
    printf("Nenhum usuário cadastrado.\n");
  }
}

void excluirUsuario(struct Usuario usuarios[], int *numUsuarios) {
  if (*numUsuarios > 0) {
    printf("\nExcluir usuário:\n");
    printf("Digite o número do usuário a ser excluído (0-%d): ",
           *numUsuarios - 1);
    int indice;
     int deu_certo = scanf("%d", &indice);
    limparBuffer();
    if (indice >= 0 && indice < *numUsuarios) {
      for (int i = indice; i < *numUsuarios - 1; i++) {
        strcpy(usuarios[i].nome, usuarios[i + 1].nome);
        usuarios[i].idade = usuarios[i + 1].idade;
      }
      (*numUsuarios)--;
      printf("Usuário excluído com sucesso!\n");
    } else {
      printf("Índice inválido.\n");
    }
  } else {
    printf("Nenhum usuário cadastrado.\n");
  }
}

void limparBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}
