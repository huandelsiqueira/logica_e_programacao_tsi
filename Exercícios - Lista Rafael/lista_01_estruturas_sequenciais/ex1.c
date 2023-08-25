#include <stdio.h>
#include <conio.h>

main() {
    float a, b, c, triangulo, quadrado, retangulo, circulo;
    printf("Digite um valor para A:\n");
    scanf("%f", &a);
    printf("Digite um valor para B:\n");
    scanf("%f", &b);
    printf("Digite um valor para C:\n");
    scanf("%f", &c);
    triangulo = (a * b) / 2;
    quadrado = b * b;
    retangulo = a * b;
    circulo = 3.14 * (c * c);
    printf("Area do triangulo de lados A e B = %.2f\n", triangulo);
    printf("Area do quadrado de lado B = %2.f\n", quadrado);
    printf("Area do retangulo de lados A e B = %2.f\n", retangulo);
    printf("Area do circulo de raio C = %.2f\n", circulo);
}