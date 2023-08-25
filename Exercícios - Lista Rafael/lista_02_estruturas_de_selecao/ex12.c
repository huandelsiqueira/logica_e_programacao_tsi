// Escreva um algoritmo para ler 2 valores (considere que não serão lidos valores iguais) e escrever o maior deles.

#include <stdio.h>
#include <conio.h>

main() {
    float v1, v2;
    printf("Digite o primeiro valor:\n");
    scanf("%f", &v1);
    printf("Digite o segundo valor (Nao podera ser igual ao primeiro):\n");
    scanf("%f", &v2);
    if (v1 > v2)
        printf("%.2f eh maior que %.2f\n", v1, v2);
    else
        printf("%.2f eh maior que %.2f\n", v2, v1);
}