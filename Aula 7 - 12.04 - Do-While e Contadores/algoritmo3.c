// Ler 10 valores e contar quantos são negativos.

#include <stdio.h>
#include <conio.h>
#include <math.h>

main () {
	float valor;
	int c, negativo;
	c=0;
	negativo=0;
	do {
		c = c + 1;
		printf("%d ", c);
		printf("Escreva um valor:");
		scanf("%f", &valor);
		if (valor < 0)
		negativo = negativo + 1;
	} while (c < 10);
	printf("A quantidade de numeros negativos eh: %d", negativo);
}
