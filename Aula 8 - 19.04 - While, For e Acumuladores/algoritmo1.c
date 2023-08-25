// Escreva um algoritmo para ler duas (aceitar somente valores entre 0 e 10), calcular e escrever a média. Acrescente uma mensagem de novo cálculo 1=sim 2=nao Se == 1, responde novamente, caso contrário, encerra o algoritmo. Utilizar a estrutura de repetição com teste no início.

#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	int resp;
	float n1, n2, media;
	while (resp == 1) {
		printf("Escreva a primeira nota:\n");
		while (n1 < 0 && n2 > 10) {
			scanf("%f", &n1);
		}
		printf("Escreva a segunda nota:\n");
		scanf("%f", &n2);
		while (n1 < 0 && n2 > 10) {
			printf("Escreva a segunda nota:\n");
			scanf("%f", &n2);
		}
		media = (n1 + n2) / 2;
		printf("A media eh = %.1f\n", media);
		printf("Novo calculo? (1).SIM ou (2).NAO\n");
		scanf("%d", &resp);
		while (resp != 1 && resp != 2);
	}	
	
}
