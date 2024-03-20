/*
  faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes)
*/

#include <stdio.h>

// Função para converter GB para bytes
long long convertGBtoBytes(double gigabytes) {
    // 1 GB = 1024^3 bytes
    return (long long)(gigabytes * 1024 * 1024 * 1024);
}

int main() {
    double gb;

    printf("Digite o valor em Gigabytes: ");
    int deu_certo = scanf("%lf", &gb);

    // Chamada da função para conversão
    long long bytes = convertGBtoBytes(gb);

    // Exibição do resultado
    printf("%.2f Gigabytes equivale a %lld Bytes.\n", gb, bytes);

    return 0;
}
