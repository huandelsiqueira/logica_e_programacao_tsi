// Ler um valor entre 1 e 10 e imrpimir a tabuada de 1 a 10 do valor lido.

#include <stdio.h>
#include <conio.h>
#include <math.h>

main () {
		int mult, valor, resultado;
		mult = 0;
		printf("Escreva o valor que voce quer a tabuada: ");
		scanf("%d", &valor);
		do {
			mult = mult + 1;
			resultado = mult * valor;
			printf("%d x %d = %d\n", mult, valor, resultado);
		} while (mult < 10);
}
