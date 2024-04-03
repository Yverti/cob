//Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.

#include <stdio.h>

int main() {
    int dividendo, divisor, quociente, resto;

    // Solicita ao usuário para inserir os dois números inteiros
    printf("Insira dois números inteiros (dividendo divisor):\n");
    int deu_certo = scanf("%d %d", &dividendo, &divisor);

    // Calcula o quociente e o resto
    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    // Imprime o quociente e o resto
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}
/*Neste programa:

.'dividendo' e 'divisor' são variáveis para armazenar os dois números inteiros fornecidos pelo usuário.
.'quociente' é a variável que armazena o resultado da divisão inteira entre 'dividendo' e 'divisor'.
.'resto' é a variável que armazena o resto da divisão entre 'dividendo' e 'divisor'.
.Usamos 'printf()' para solicitar ao usuário que insira os dois números inteiros e 'scanf()' para ler esses números a partir da entrada padrão.
.O quociente é calculado usando o operador de divisão '/' e o resto é calculado usando o operador de módulo '%'.
.Finalmente, usamos 'printf()' para exibir o quociente e o resto.
*/