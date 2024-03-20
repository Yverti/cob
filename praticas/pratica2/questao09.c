/*
Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.
*/

#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário um número inteiro
    printf("Digite um número inteiro: ");
    int deu_certo = scanf("%d", &numero);

    // Converte o número inteiro para o caractere ASCII correspondente
    char caractere = (char)numero;

    // Exibe o caractere correspondente
    printf("O caractere correspondente ao número %d na tabela ASCII é: %c\n", numero, caractere);

    return 0;
}
