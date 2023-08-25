// Escreva um programa em C e no diagrama de Chapin um algoritmo que leia duas notas (só devera ser aceito valores de 0 a 10 para cada nota), calcular e escrever a média. Escreva uma mensagem de "Novo cálculo? 1-sim 2-não", se for respondido "1", deverá executar o programa novamente, caso contrário, deverá encerrar.
// OBS: Acrescente "valor inválido se o valor não estiver  de 0 a 10.

#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	float n1, n2, m;
	int resp;
	do {
		do {
			printf("Escreva a primeira nota:\n");
			scanf("%f", &n1);
			if (n1 < 0 || n1 > 10)
				printf("Valor invalido!\n");
		} while (n1 < 0 || n1 > 10);  /* ver essa parte dos operadores logicos */
		do {
			printf("Escreva a segunda nota:\n");
			scanf("%f", &n2);
			if (n2 < 0 || n2 > 10)
				printf("Valor invalido!\n");
		} while (n2 < 0 || n2 > 10);
		m = (n1 + n2) / 2;
		printf("A media eh: %.2f\n", m);
		do {
			printf("Novo calculo? (1).SIM ou (2).NAO\n");
			scanf("%d", &resp);
		} while (resp != 1 && resp != 2);
	} while (resp == 1);
}
