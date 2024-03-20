/*
faça um prograna em C que calcule o perimetro de uma pizza (P = 2 x PI x r). Considere o raio um numero inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

#define PI 3.1416

int main() {
    int raio;
    float perimetro;

    // Solicita ao usuário para inserir o raio da pizza
    printf("Digite o raio da pizza (em cm): ");
     int deu_certo = scanf("%d", &raio);

    // Calcula o perímetro da pizza
    perimetro = 2 * PI * raio;

    // Exibe o resultado
    printf("O perímetro da pizza é: %.2f cm\n", perimetro);

    return 0;
}