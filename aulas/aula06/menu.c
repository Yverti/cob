#include <stdio.h>

int main() {
  char opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Fazer recarga\n");
  printf("3 - Listar recados\n");
  printf("4 - Ligacoes feitas\n");
  printf("Entre com uma opcao => ");
  printf("0 - Sair\n")
  int leu_certo = scanf("%c", &opcao);

  switch(opcao) {
    case '1' : printf("Seu saldo eh R$ 10.0\n"); break;
    case '2' : {
      float valor;
      printf("Entre com o valor da recarga: ");
      leu_certo = scanf("%f", &valor);
      if (!leu_certo) {
        printf("Valor invalido!\n");
      }
      break;
    }
    case '3' : printf("Você não tem recados\n"); break;
    case '4' :
      printf("619999999\n");
      printf("618888888\n");
      printf("619999999\n");
      printf("618888888\n");
      break;
    case '0' : printf("Ate logo!\n"); break;
    default: printf("Opcao invalida. Tente novamente!\n");
  }

  return 0;
}