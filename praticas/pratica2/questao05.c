//Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).

#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Solicita ao usuário para inserir o peso e a altura
    printf("Insira o peso (em kg): ");
    int deu_certo = scanf("%f", &peso);
    printf("Insira a altura (em metros): ");
    deu_certo = scanf("%f", &altura);

    // Calcula o IMC
    imc = peso / (altura * altura);

    // Imprime o resultado
    printf("O Índice de Massa Corporal (IMC) é: %.2f\n", imc);

    return 0;
}

/*Neste programa:

*   `peso` e `altura` são variáveis para armazenar o peso (em kg) e a altura (em metros) fornecidos pelo usuário.
*   `imc` é a variável que armazena o Índice de Massa Corporal (IMC).
*   Usamos `printf()` para solicitar ao usuário que insira o peso e a altura e `scanf()` para ler esses valores a partir da entrada padrão.
*   O IMC é calculado dividindo o peso pela altura ao quadrado.
*   Finalmente, usamos `printf()` para exibir o resultado do IMC com duas casas decimais.
*/


