#include <stdio.h>

int main() {
  int tabuada, i;

  // Solicita ao usuário que escolha a tabuada
  printf("Escolha a tabuada que deseja imprimir (de 1 a 10): ");
  int deu_certo = scanf("%d", &tabuada);

  // Verifica se a tabuada escolhida está dentro do intervalo permitido
  if (tabuada < 1 || tabuada > 10) {
    printf("Opção inválida. Escolha uma tabuada de 1 a 10.\n");
    return 1; // Retorna 1 para indicar um erro
  }

  // Imprime a tabuada escolhida
  printf("Tabuada do %d:\n", tabuada);
  switch (tabuada) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    for (i = 1; i <= 10; i++) {
      printf("%d x %d = %d\n", tabuada, i, tabuada * i);
    }
    break;
  }

  return 0;
}

// Este programa utiliza dois laços `for`. O primeiro laço `for` é responsável
// por iterar de 1 a 10, representando os números cujas tabuadas serão
// calculadas. Dentro desse laço, há outro laço `for` que itera de 1 a 10,
// representando os multiplicadores de cada número. Dentro deste segundo laço, a
// tabuada é impressa para cada multiplicador. Uma linha em branco é adicionada
// após cada tabuada para melhorar a legibilidade.