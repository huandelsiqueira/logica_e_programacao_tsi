#include <stdio.h>
#include <conio.h>

main() {
    int a, b, c;
    printf("Digite um valor para A:\n");
    scanf("%d", &a);
    printf("Digite um valor para B:\n");
    scanf("%d", &b);
    printf("Digite um valor para C:\n");
    scanf("%d", &c);
    if (a == 1) {
        printf("Verde\n");
    } else if (b == 2) {
        if (c == 3) {
            printf("Azul\n");
        } else {
            printf("Uva\n");
            printf("Pera\n");
        }
    } else {
        printf("Preto\n");
    }
    printf("Violeta\n");
}