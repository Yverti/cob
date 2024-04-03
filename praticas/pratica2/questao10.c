//Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação

#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário para inserir um número inteiro
    printf("Insira um número inteiro: ");
  int deu_certo = scanf("%d", &numero);

    // Imprime a tabuada de multiplicação
    printf("Tabuada de multiplicação do número %d:\n", numero);
    for (int i = 1; i <= 10; i++) 
    deu_certo = printf("%d x %d = %d\n", numero, i, numero * i);
     
  return 0;
}

  /*Neste programa:

.'numero' é a variável que armazena o número inteiro fornecido pelo usuário.
Usamos 'printf()' para solicitar ao usuário que insira um número inteiro e 'scanf()' para ler esse número a partir da entrada padrão.
Em seguida, usamos um loop 'for' para iterar de 1 a 10 e calculamos o produto do número inserido pelo usuário com o valor do contador do loop (de 1 a 10) para imprimir a tabuada de multiplicação.
Cada linha da tabuada é impressa no formato "número x contador = resultado".
  */  