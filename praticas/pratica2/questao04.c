//Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²)

#include <stdio.h>

int main() {
    float largura, comprimento, area_hectares;

    // Solicita ao usuário a largura e o comprimento do terreno
    printf("Insira a largura do terreno (em metros): ");
   int deu_certo = scanf("%f", &largura);
    printf("Insira o comprimento do terreno (em metros): ");
    deu_certo = scanf("%f", &comprimento);

    // Calcula a área em metros quadrados
    float area_metros_quadrados = largura * comprimento;

    // Calcula a área em hectares
    area_hectares = area_metros_quadrados / 10000;

    // Exibe a área do terreno em hectares
    printf("A área do terreno é: %.2f hectares\n", area_hectares);

    return 0;
}

/*Neste programa:

.'largura' e 'comprimento' são variáveis para armazenar a largura e o comprimento do terreno, respectivamente.
'area_hectares' é a variável que armazena a área do terreno em hectares.
.Usamos 'printf()' para solicitar ao usuário que insira a largura e o comprimento do terreno e 'scanf()' para ler esses valores a partir da entrada padrão.
.A área do terreno é calculada multiplicando a largura pelo comprimento, resultando na área em metros quadrados.
.Em seguida, essa área é dividida por 10.000 para obter a área em hectares.
.Finalmente, usamos 'printf()' para exibir a área do terreno em hectares.
*/