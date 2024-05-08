/*2. Faça um programa em C que calcule o valor do desconto sobre um valor bruto
 * lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica
 * 5%; acima de 500.00 aplica 10%.*/

#include <stdio.h>

int main() {
  float valorBruto, desconto, valorFinal;

  // Solicita ao usuário que insira o valor bruto
  printf("Insira o valor bruto: ");
  int leu_certo = scanf("%f", &valorBruto);

  // Calcula o desconto com base na escala
  if (valorBruto <= 100.0f) {
    desconto = valorBruto * 0.01f; // 1% de desconto
  } else if (valorBruto <= 500.0f) {
    desconto = valorBruto * 0.05f; // 5% de desconto
  } else {
    desconto = valorBruto * 0.1f; // 10% de desconto
  }

  // Calcula o valor final após o desconto
  valorFinal = valorBruto - desconto;

  // Exibe o valor do desconto e o valor final
  printf("Desconto aplicado: R$%.2f\n", desconto);
  printf("Valor final: R$%.2f\n", valorFinal);

  return 0;
}

//Este programa primeiro solicita ao usuário que insira o valor bruto. Em seguida, ele calcula o desconto com base na escala fornecida e depois calcula o valor final após o desconto. Por fim, ele exibe o valor do desconto aplicado e o valor final.
