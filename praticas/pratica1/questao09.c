#include <stdio.h>

int main() {
    int anos, meses, dias, idade_em_dias;

    // Entrada da idade
    printf("Digite a idade em anos, meses e dias (separados por espaco): ");
    int deu_certo = scanf("%d %d %d", &anos, &meses, &dias);

    // Cálculo da idade em dias
    idade_em_dias = anos * 365 + meses * 30 + dias;

    // Exibição do resultado
    printf("A idade em dias eh: %d dias.\n", idade_em_dias);

    return 0;
}
