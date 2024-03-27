/*
  Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°
  */

#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundos_restantes;

    // Entrada dos segundos
    printf("Digite o tempo em segundos: ");
    int deu_certo = scanf("%d", &segundos);

    // Cálculo das horas, minutos e segundos
    horas = segundos / 3600;
    segundos_restantes = segundos % 3600;
    minutos = segundos_restantes / 60;
    segundos_restantes %= 60;

    // Exibição do resultado
    printf("%d segundos correspondem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, segundos_restantes);

    return 0;
}
