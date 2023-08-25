#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

main(){
	int valor, i, numero;
	i = 0;
	srand(time(NULL));
	numero = rand() % 100;
	printf("JOGO DA ADIVINHACAO!\n Voce tem 5 tentativas.\n Informe um numero de 0 a 100.\n");
	do {
		i = i + 1;
		printf("%d.Escreva um valor:\n", i);
		scanf("%d", &valor);
		if (i == 5) 
			break;
		if (valor == numero) {
			printf("PARABENS! Voce acertou!");
			break;
		}
		if (valor < numero) 
			printf("O numero sorteado eh maior!\n");
		if (valor > numero)
			printf("O numero sorteado eh menor!\n");
	} while (valor != numero);
	printf("%d", numero);
}
