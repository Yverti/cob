/*
  faça um programa em C que leia uma temperatura em graus celsius e calcule o valor correspondente em graus fahrenheit (°F = 9/5° + 32)
*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Solicita ao usuário a temperatura em graus Celsius
    printf("Digite a temperatura em graus Celsius: ");
    int deu_certo = scanf("%f", &celsius);

    // Calcula a temperatura em graus Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Exibe o resultado
    printf("%.2f graus Celsius equivale a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
