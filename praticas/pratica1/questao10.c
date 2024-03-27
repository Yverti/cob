#include <stdio.h>

int main() {
    int numero, unidade, dezena, centena, milhar;

    // Entrada do número
    printf("Digite um numero inteiro de no maximo 4 digitos: ");
    int deu_certo = scanf("%d", &numero);

    // Cálculo das unidades, dezenas, centenas e milhares
    unidade = numero % 10;
    dezena = (numero / 10) % 10;
    centena = (numero / 100) % 10;
    milhar = (numero / 1000) % 10;

    // Exibição do resultado
    printf("%d eh decomposto em %d unidades, %d dezenas, %d centenas e %d milhares.\n", numero, unidade, dezena, centena, milhar);

    return 0;
}
