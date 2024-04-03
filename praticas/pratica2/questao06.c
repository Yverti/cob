//Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra)

#include <stdio.h>

int main() {
    float valor_compra, depreco, valor_depreciado;
    int ano_fabricacao, ano_depreciacao;

    // Solicita ao usuário para inserir o valor de compra, ano de fabricação e ano de depreciação
    printf("Insira o valor de compra do veículo: ");
    int deu_certo = scanf("%f", &valor_compra);
    printf("Insira o ano de fabricação do veículo: ");
  deu_certo = scanf("%d", &ano_fabricacao);
    printf("Insira o ano de depreciação do veículo: ");
  deu_certo = scanf("%d", &ano_depreciacao);

    // Calcula o valor depreciado
    depreco = ano_depreciacao - ano_fabricacao;
    valor_depreciado = depreco * 0.01 * valor_compra;

    // Imprime o valor depreciado do veículo
    printf("O valor depreciado do veículo é: %.2f\n", valor_depreciado);

    return 0;
}

/*Neste programa:

*   `valor_compra`, `ano_fabricacao`, `ano_depreciacao` são variáveis para armazenar o valor de compra do veículo, o ano de fabricação e o ano de depreciação, respectivamente.
*   `depreco` é a variável que armazena o resultado da diferença entre o ano de depreciação e o ano de fabricação.
*   `valor_depreciado` é a variável que armazena o valor depreciado do veículo.
*   Usamos `printf()` para solicitar ao usuário que insira o valor de compra, o ano de fabricação e o ano de depreciação e `scanf()` para ler esses valores a partir da entrada padrão.
*   O valor depreciado é calculado multiplicando a diferença entre o ano de depreciação e o ano de fabricação por 0,01 e pelo valor de compra.
*   Finalmente, usamos `printf()` para exibir o valor depreciado do veículo.
*/