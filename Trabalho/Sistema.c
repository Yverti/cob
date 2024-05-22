#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_NAME_LENGTH 50

// Definição da estrutura para armazenar os dados
typedef struct {
  char name[MAX_NAME_LENGTH];
  int age;
  char email[MAX_NAME_LENGTH];
} Person;

int main() {
  Person people[MAX_ENTRIES];
  int num_people = 0;
  char choice;

  do {
    // Limpa a tela do terminal
    int deu_certo = system("clear");

    // Exibição do menu principal
    printf("\nSistema de Cadastro de Pessoas\n");
    printf("1. Cadastrar pessoa\n");
    printf("2. Mostrar todas as pessoas cadastradas\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    deu_certo = scanf(" %c", &choice);

    switch (choice) {
    case '1':
      if (num_people < MAX_ENTRIES) {
        // Cadastro de uma nova pessoa
        printf("\nCadastro de Pessoa %d\n", num_people + 1);
        printf("Nome: ");
        int deu_certo = scanf("%s", people[num_people].name);
        printf("Idade: ");
        deu_certo = scanf("%d", &people[num_people].age);
        printf("Email: ");
        deu_certo = scanf("%s", people[num_people].email);
        num_people++;
        printf("Pessoa cadastrada com sucesso!\n");
      } else {
        printf("Limite de pessoas atingido. Nao e possivel cadastrar mais "
               "pessoas.\n");
      }
      break;
    case '2':
      if (num_people > 0) {
        // Exibição de todas as pessoas cadastradas
        printf("\nPessoas cadastradas:\n");
        for (int i = 0; i < num_people; i++) {
          printf("Nome: %s | Idade: %d | Email: %s\n", people[i].name,
                 people[i].age, people[i].email);
        }
      } else {
        printf("Nenhuma pessoa cadastrada.\n");
      }
      break;
    case '3':
      printf("Saindo do sistema...\n");
      break;
    default:
      printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
    }

    // Aguarda o usuário pressionar Enter antes de continuar
    printf("\nPressione Enter para continuar...");
    while (getchar() != '\n')
      ;

  } while (choice != '3');

  return 0;
}
