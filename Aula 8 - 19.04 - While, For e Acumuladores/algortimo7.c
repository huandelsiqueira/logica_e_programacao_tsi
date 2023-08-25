// Escreva um algortimo para ler um valor inteiro (aceitar apenas valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido. (Utilizar FOR)

#include <stdio.h>
#include <conio.h>
#include <math.h>

main () {
	int valor, c, i;
	do {
		printf("Escreva um valor para a tabuada:\n");
		scanf("%d", &valor);
	} while (valor < 0 || valor > 10);
	for (i = 1; i <= 10; i++) {
		c = i * valor;
		printf("%d x %d = %d\n", valor, i, c);
	}
}
