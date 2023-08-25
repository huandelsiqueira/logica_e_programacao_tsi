#include <stdio.h>
#include <conio.h>

main() {
    int a, b, c, d, e;
    printf("Digite um valor para A:\n");
    scanf("%d", &a);
    printf("Digite um valor para B:\n");
    scanf("%d", &b);
    printf("Digite um valor para C:\n");
    scanf("%d", &c);
    printf("Digite um valor para D:\n");
    scanf("%d", &d);
    printf("Digite um valor para E:\n");
    scanf("%d", &e);
    if (a == 1) {
        printf("Amarelo\n");
        if (b == 1) {
            printf("Azul\n");
        }
        printf("Preto\n");
        if (d == 1) {
            printf("Verde\n");
        } else {
            printf("Violeta\n");
        }
    } else {
        if (c == 1) {
            printf("Vermelho\n");
        }
        if (e == 1) {
            printf("Laranja\n");
            printf("Cinza\n");
        }
    }
}