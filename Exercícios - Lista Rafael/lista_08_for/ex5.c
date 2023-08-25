// Escreva um algoritmo que leia um valor A e imprima os números de 1 a 20 com um incremento de A.

#include <stdio.h>
#include <conio.h>

main() {
    int a, i;
    printf("Digite um valor:\n");
    scanf("%d", &a);
    for (i = 1; i <= 20; i+=a) {
        printf("%d ", i);
    }
}