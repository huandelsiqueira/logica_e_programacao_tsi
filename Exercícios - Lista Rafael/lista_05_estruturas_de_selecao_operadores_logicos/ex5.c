//  Escreva um algoritmo que leia as medidas dos lados de um triângulo e escreva se ele é EQUILÁTERO, ISÓSCELES ou ESCALENO.
//OBS: triângulo equilátero: Possui os 3 lados iguais.
// triângulo isósceles: Possui 2 lados iguais.
// triângulo escaleno: Possui 3 lados diferentes.

#include <stdio.h>
#include <conio.h>

main() {
    float lado1, lado2, lado3;
    printf("Digite a medida do primeiro lado do triangulo:\n");
    scanf("%f", &lado1);
    printf("Digite a medida do segundo lado do triangulo:\n");
    scanf("%f", &lado2);
    printf("Digite a medida do terceiro lado do triangulo:\n");
    scanf("%f", &lado3);
    if(lado1 == lado2 && lado2 == lado3) {
        printf("Equilatero\n");
    } else if (lado1 == lado2 || lado1 == lado3 ||lado2 == lado3) {
        printf("Isosceles\n");
    } else {
        printf("Escaleno\n");
    }
}