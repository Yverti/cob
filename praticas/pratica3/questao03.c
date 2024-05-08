/*3. Faça um programa em C que imprima um qualitativo associado a uma nota lida
 * conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 =
 * Ótimo, e imprima Nota inválida nos demais casos.*/

#include <stdio.h>

int main() {
  int nota;

  // Solicita ao usuário que insira a nota
  printf("Insira a nota: ");
  int leu_certo = scanf("%d", &nota);

  // Imprime o qualitativo associado à nota
  switch (nota) {
    case 1: printf("Ruim\n"); break;
    case 2: printf("Insuficiente\n"); break;
    case 3: printf("Suficiente\n"); break;
    case 4: printf("Bom\n"); break;
    case 5: printf("Ótimo\n"); break;
    default: printf("Nota inválida\n");
  }

  return 0;
}

// Neste programa, solicitamos ao usuário que insira a nota e, em seguida,
// utilizamos uma estrutura switch para imprimir o qualitativo associado a essa
// nota de acordo com a tabela fornecida. Se a nota inserida não estiver na
// tabela (ou seja, não for 1, 2, 3, 4 ou 5), ele imprime "Nota inválida".
