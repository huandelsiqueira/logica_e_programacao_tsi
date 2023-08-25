// Escreva um algoritmo para ler as coordenadas (X, Y) de um ponto no sistema cartesiano e escrever o quadrante ao qual o ponto pertence. Caso o ponto não pertença a nenhum quadrante, escrever se ele está sobre o eixo X, eixo Y ou na origem.

#include <stdio.h>
#include <conio.h>

main() {
    float x, y;
    printf("Digite um valor para X:\n");
    scanf("%f", &x);
    printf("Digite um valor para Y:\n");
    scanf("%f", &y);
    if (x > 0 && y > 0) {
        printf("Quadrante: I\n");
    } else if (x < 0 && y > 0) {
        printf("Quadrante: II\n");
    } else if (x < 0 && y < 0) {
        printf("Quadrante: III\n");
    } else if (x > 0 && y < 0) {
        printf("Quadrante: IV\n");
    }
    if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (x == 0) {
        printf("Eixo Y\n");
    } else if (y == 0) {
        printf("Eixo X\n");
    }
}