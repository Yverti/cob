//Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    // Solicita ao usuário para inserir as coordenadas dos dois pontos
    printf("Insira as coordenadas do primeiro ponto (x1 y1): ");
  int deu_certo =  scanf("%f %f", &x1, &y1);
    printf("Insira as coordenadas do segundo ponto (x2 y2): ");
    deu_certo = scanf("%f %f", &x2, &y2);

    // Calcula a distância entre os dois pontos
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    // Imprime a distância entre os pontos
    printf("A distância entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é: %.2f\n", x1, y1, x2, y2, distancia);

    return 0;
}

/*Neste programa:

.'x1', 'y1', 'x2', 'y2' são variáveis para armazenar as coordenadas dos dois pontos fornecidos pelo usuário.
'distancia' é a variável que armazena a distância entre os dois pontos.
.Usamos 'printf()' para solicitar ao usuário que insira as coordenadas dos dois pontos e 'scanf()' para ler esses valores a partir da entrada padrão.
.Em seguida, usamos a função 'sqrt()' da biblioteca 'math.h' para calcular a raiz quadrada e a função 'pow()' para calcular a potência, conforme a fórmula da distância entre os pontos.
.Finalmente, usamos 'printf()' para exibir a distância entre os pontos.
*/