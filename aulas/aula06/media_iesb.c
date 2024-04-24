#include <stdio.h>

int main() {
  float nota1;
  float nota2;
  
  printf("Entre com a primeira nota:");
  int leu_certo = scanf("%f", &nota1);

  int nota1_eh_valida = nota1 >= 0.0f && nota1 <= 10.0f;
  if (nota1_eh_valida){
    printf("Entre com a segunda nota: ");
    leu_certo = scanf("%f", &nota2);

    int nota2_eh_valida = nota2 >= 0.0f && nota2 <= 10.0f;
    if (nota2_eh_valida) {
      float media = 0.4 * nota1 + 0.6 * nota2;
      printf("A media iesb é %.1f", media);
    } else {
      printf("Nota inválida! Informe um valor 0.0 e 10.0\n");
    }
  } else {
    printf("Nota inválida! Informe um valor 0.0 e 10.0\n");
  }
    
    
  
  
  return 0;
}