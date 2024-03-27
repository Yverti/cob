#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double angulo_graus, distancia, altura;
    double angulo_radianos;

    // Entrada dos dados
    printf("Digite o angulo de inclinacao do aviao (em graus, <= 45): ");
    int deu_certo = scanf("%lf", &angulo_graus);
    printf("Digite a distancia percorrida pelo aviao (em metros): ");
    deu_certo = scanf("%lf", &distancia);

    // Verificação do ângulo
    if (angulo_graus > 45) {
        printf("Erro: O angulo de inclinacao do aviao deve ser menor ou igual a 45 graus.\n");
        return 1; // Saída do programa indicando erro
    }

    // Conversão de graus para radianos
    angulo_radianos = angulo_graus * PI / 180.0;

    // Cálculo da altura
    altura = sin(angulo_radianos) * distancia;

    // Saída do resultado
    printf("A altura alcançada pelo aviao é de %.2f metros.\n", altura);

  /*
    Neste programa:

  O usuário insere os coeficientes a, b e c da equação do segundo grau.
  O programa calcula o delta.
  Se o delta for maior ou igual a zero, o programa calcula as raízes reais usando a fórmula de Bhaskara.
  Se o delta for negativo, o programa exibe uma mensagem indicando que as raízes são complexas.
    */

    return 0;
}
