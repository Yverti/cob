/*
 Faça um programa em C que leia três números reais e imprima a média aritmética desses números
*/

#include <stdio.h>

int main() {
    float num1, num2, num3, media;

    // Solicita ao usuário para inserir os três números
    printf("Insira três números reais:\n");
    int deu_certo = scanf("%f %f %f", &num1, &num2, &num3);

    // Calcula a média aritmética
    media = (num1 + num2 + num3) / 3;

    // Imprime a média
    printf("A média aritmética dos números é: %.2f\n", media);

    return 0;
}
/*
Neste programa:

'num1', 'num2' e 'num3' são variáveis para armazenar os três números reais fornecidos pelo usuário.
'media' é a variável que armazena o resultado da média aritmética.
Usamos 'printf()' para solicitar ao usuário que insira os três números e 'scanf()' para ler esses números a partir da entrada padrão.
A média aritmética é calculada somando os três números e dividindo o resultado por 3.
Finalmente, usamos 'printf()' para exibir a média aritmética com duas casas decimais.
  */