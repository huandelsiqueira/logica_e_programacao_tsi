// Escreva um algoritmo para ler 10 valores e escrever quantos são negativos.

#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	float valor;
	int c, i;
	c = 0;
	for (i=1; i <= 10; i++) {
		printf("%d. Digite um valor:\n", i);
		scanf("%f", &valor);
		if (valor < 0)
			c = c + 1;
	}
	printf("O numero de negativos eh: %d", c);
}

