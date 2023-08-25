// Escreva um algoritmo que leia o valor de 3 ângulos de um triângulo e escreva se o triângulo é acutângulo, retângulo ou obtusângulo.
// OBS: triângulo retângulo: possui um ângulo reto.
// triângulo obtusângulo: possui um ângulo obtuso.
// triângulo acutângulo: possui 3 ângulos agudos.

#include <stdio.h>
#include <conio.h>

main() {
    int angulo1, angulo2, angulo3;
    printf("Digite o 1o angunlo:\n");
    scanf("%d", &angulo1);
    printf("Digite o 2o angunlo:\n");
    scanf("%d", &angulo2);
    printf("Digite o 3o angunlo:\n");
    scanf("%d", &angulo3);
    if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
        printf("Retangulo\n");
    } else if (angulo1 < 90 && angulo2 < 90 && angulo3 < 90) {
        printf("Acutangulo\n");
    } else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90) {
        printf("Obtusangulo\n");
    }
}
