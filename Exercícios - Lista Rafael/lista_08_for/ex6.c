//  Escreva um algoritmo para ler um valor N (validar para aceitar apenas valores positivos utilizando uma estrutura de repetição) e imprimir a palavra PROGRAMACAO N vezes.

#include <stdio.h>
#include <conio.h>

main() {
    int n, i;
    do {
        printf("Digite um valor:\n");
        scanf("%d", &n);
    } while (n <= 0);
    for (i = 1; i <= n; i++) {
        printf("Programacao\n");
    }
}