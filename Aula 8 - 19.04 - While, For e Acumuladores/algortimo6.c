// Ler um valor n (aceitar somente valores maiores que zero para n) e imprimir todos os valores inteiros entre 1 e n, inclusive.

#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	int i, n;
	do {
		printf("Digite um valor:\n");
		scanf("%d", &n);
	} while (n < 0);
	for (i = 1; i <= n; i++) {
		printf("\n%d", i);
	}
}
