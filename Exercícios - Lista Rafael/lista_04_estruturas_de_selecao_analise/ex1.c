#include <stdio.h>
#include <conio.h>

main() {
    int a, b;
    printf("Digite um valor para A:\n");
    scanf("%d", &a);
    printf("Digite um valor para B:\n");
    scanf("%d", &b);
    printf("Amarelo\n");
    if (a == 1) {
        printf("Azul\n");
        printf("Verde\n");
        printf("Roxo\n");
    } else {
        printf("Pera\n");
        if (b == 1) {
            printf("Maca\n");
        } else {
            printf("Morango\n");
        }
    }
    printf("Uva\n");
}