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
        printf("Morango\n");
        if (b == 1) {
            if (c == 1) {
                printf("Pera\n");
            } else {
                printf("Abacate\n");
            }
        }
    }
    printf("Limao\n");
}