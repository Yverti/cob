/*faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz quadrada(b² - 4ac)/2a). */

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, raiz_delta, raiz1, raiz2;

    // Entrada dos coeficientes da equação
    printf("Digite os coeficientes da equacao (a, b, c): ");
    int deu_certo = scanf("%lf %lf %lf", &a, &b, &c);

    // Verificando se a equação é de segundo grau
    if (a == 0) {
        printf("Erro: A equacao nao e de segundo grau.\n");
        return 1; // Saída do programa indicando erro
    }

    // Calculando o delta
    delta = b * b - 4 * a * c;

    // Verificando o valor do delta
    if (delta > 0) {
        // Delta positivo: duas raízes reais distintas
        raiz_delta = sqrt(delta);
        raiz1 = (-b + raiz_delta) / (2 * a);
        raiz2 = (-b - raiz_delta) / (2 * a);
        printf("As raizes sao: %.2lf e %.2lf\n", raiz1, raiz2);
    } else if (delta == 0) {
        // Delta zero: raízes reais iguais
        raiz1 = -b / (2 * a);
        printf("A raiz dupla e: %.2lf\n", raiz1);
    } else {
        // Delta negativo: raízes complexas
        printf("As raizes sao complexas.\n");
    }

    return 0;
}
