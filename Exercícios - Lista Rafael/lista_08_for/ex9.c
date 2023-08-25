//  Escreva um algoritmo para ler um valor X (validar -com repetição- para aceitar apenas valores entre 1 (inclusive) e 10 (inclusive). Calcular e imprimir a tabela desse valor X.

#include <stdio.h>
#include <conio.h>

main() {
    int x, i;
    do {
        printf("Digite um valor (entre 1 e 10):\n");
        scanf("%d", &x);
    } while (x < 1 || x > 10);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", x, i, x*i);
    }
}