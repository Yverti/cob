#include <stdio.h>

int main() {
  int numero;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero);


  // 0 < x < 10 -> 0 < x E x < 10
  int maior_que_0_e_menor_que_10 = numero > 0 && numero < 10;
  printf("O numero é maior que 0 e menor que 10? %i\n",
maior_que_0_e_menor_que_10);

  // 0 < x < 10 -> x < 0 ou x < 10
  int menor_que_0_ou_maior_que_10 = numero < 0 || numero > 10;
  printf("O numero é menor que 0 ou maior que 10? %i\n", menor_que_0_ou_maior_que_10);

  // x Nao > 0
  int nao_maior_que_0 = !(numero > 0); // numero < 0
  printf("O numero nao eh maior que 0? %i\n", nao_maior_que_0);
  
  return 0;
}  