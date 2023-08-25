#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <math.h>

main () {
	int i, resp, c;
	c = 0;
	printf("JOGO DAS PERGUNTAS!\n");
			printf("O Brasil, em numeros de copa do mundo, eh?\n (1).Bicampeao\n (2).Campeao\n (3).Tetracampeao\n (4).Hexacampeao\n");
			scanf("%d", &resp);
		if (resp == 4) {
			c = c + 1;
			printf("Voce ACERTOU!\n");
		}
		else 
			if (resp == 4) {
				printf("Voce ERROU! A resposta correta eh (4).Hexacampeao\n");
			}
			printf("Quantos titulos brasileiros o Internacional tem?\n (1).Um\n (2).Tres\n (3).Dois\n (4).Nenhum\n");
			scanf("%d", &resp);
		if (resp == 2) {
			c = c + 1;
			printf("Voce ACERTOU!\n");
		}
		else 
			if (resp != 2) {
				printf("Voce ERROU! A resposta correta eh (2).Tres\n");
			}
			printf("Qual eh o time rival do E.C. Pelotas?\n (1).Gremio\n (2).Brasil de Pelotas\n (3).Flamengo\n (4).Farroupilha\n");
			scanf("%d", &resp);
		if (resp == 2) {
			c = c + 1;
			printf("Voce ACERTOU!\n");
		}
		else 
			if (resp != 2) {
				printf("Voce ERROU! A resposta correta eh (2).Brasil de Pelotas\n");
			}
			printf("Bruce Dickinson eh vocalista de qual dessas bandas?\n (1).Iron Maiden\n (2).Deep Purple\n (3).Metallica\n (4).Black Sabbath\n");
			scanf("%d", &resp);
		if (resp == 1) {
			c = c + 1;
			printf("Voce ACERTOU!\n");
		}
		else 
			if (resp != 1) {
				printf("Voce ERROU! A resposta correta eh (1).Iron Maiden\n");
			}
			printf("Em qual ano ocorreu a independencia do Brasil?\n (1).1889\n (2).1964\n (3).1822\n (4).1930\n");
			scanf("%d", &resp);
		if (resp == 3) {
			c = c + 1;
			printf("Voce ACERTOU!\n");
		}
		else 
			if (resp == 3) {
				printf("Voce ERROU! A resposta correta eh (3).1822\n");
			}
	printf("Voce acertou %d vez(es)\n", c);
	printf("Sua media de acerto eh: %.2f\n", media);
}
