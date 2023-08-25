#include <stdio.h>
#include <conio.h>

main() {
    int a, b , c;
    printf("Digite um valor para A:\n");
    scanf("%d", &a);
    printf("Digite um valor para B:\n");
    scanf("%d", &b);
    printf("Digite um valor para C:\n");
    scanf("%d", &c);
    if (a == 1) {
        if (b == 1) {
            printf("A\n");
            printf("B\n");
        }
    }
    printf("C\n");
    if (c == 1) {
        printf("D\n");
        printf("E\n");
    } else {
        printf("F\n");
    }
}