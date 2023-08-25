// Escreva um algoritmo utilizando uma estrutura de repetição e um contador que imprima os números de 1 a 20.

#include <stdio.h>
#include <conio.h>
#include <math.h>

main () {
	float valor;
	int c;
	c=0;
	do {
		c = c + 1;
		printf("%d ", c);
		printf("Escreva um valor:");
		scanf("%f", &valor);
	} while (c < 20);
}
