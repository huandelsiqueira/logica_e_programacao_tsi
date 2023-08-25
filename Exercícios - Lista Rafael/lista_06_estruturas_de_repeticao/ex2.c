// Escreva um algoritmo para ler vários raios de circunferências. Para cada raio informado calcular e escrever o comprimento da respectiva circunferência. O algoritmo deve ser encerrado ao ser fornecido para o raio um valor zero ou negativo (nesta situação o comprimento não deve ser calculado).

#include <stdio.h>
#include <conio.h>

main() {
    float raio, circunferencia;
    while (raio > 0) {
        printf("Digite um valor para o raio:\n");
        scanf("%f", &raio);
        circunferencia = 2 * 3.14 * raio;
        if (raio > 0) {
            printf("Circunferencia = %.2f\n", circunferencia);
        }
    }
}