#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <math.h>

main() {
	int op, i, escolha, palpite;
	i=0;
	i = i + 1;
	printf("JOGO DOS PALPITES!\n");
	srand(time(NULL));
	do {
		do {
			printf("Escolha o tipo de jogo:\n (1).Loto\n (2).Mega Sena\n");
			scanf("%d", &op);
		} while (op != 1 && op != 2);
		if (op == 1) {
			printf("%d %d %d %d %d\n", rand() % 100, rand() % 100, rand() % 100, rand() % 100, rand() % 100);
		}
		if (op == 2) {
			printf("%d %d %d %d %d %d\n", rand() % 50, rand() % 50, rand() % 50, rand() % 50, rand() % 50, rand() % 50);
		}
		do {
 			printf("Deseja jogar novamente? (1).SIM ou (2).NAO\n");
 			scanf("%d", &escolha);
 		} while (escolha != 1 && escolha != 2);
	} while (escolha == 1);
}
