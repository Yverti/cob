#include <stdio.h>
#include <string.h>

int main() {     //0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9
  char nome[31]; //U m   n o m e   d e  u m  p e s s o a   c o n h e c i d a \0

  printf("Entre com o seu nome: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("Olá %s!\n", nome);

  char primeiro_nome[21];
  char ultimo_nome[21];

  strcpy(primeiro_nome, "Jose");  // primeiro_nome = "Jose"
  strcpy(ultimo_nome, "Junior");

  strcpy(nome, primeiro_nome);
  strcat(nome, ultimo_nome);   // nome = primeiro_nome + ultimo_nome
  int tamanho = strlen(nome);
  printf("Seu nome tem %i caracteres\n", tamanho);
  printf("As strings sao iguais? %i\n", strcmp(primeiro_nome, ultimo_nome)); // ==

  return 0;
}