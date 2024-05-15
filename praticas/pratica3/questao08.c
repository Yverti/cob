/*
8. Faça um programa em C que calcule o fatorial de um número inteiro.
*/
#include <stdio.h>

int main() {
  int numero;
  long int fatorial = 1;
  
  printf("Caulculo do Fatorial (n!)\n\n");
  printf("Entre com um numero >= 0; ");
  int deu_certo = scanf("%i", &numero);
  int numero_válido = numero >= 0;

  if (deu_certo && numero_válido) {
    printf("%i! =", numero);
    for (int i = numero; i >= 1; i--) {
      fatorial = fatorial * i;
      printf(" %ix", i);
    }
    printf("1 = %li\n", fatorial);
  }else{
    printf("Numero invalido!\n");
  }
  
  return 0;
}