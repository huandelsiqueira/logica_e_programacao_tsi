#include <stdio.h>
#include <conio.h>

main()
	{
		char time1[10], time2[10];
		int gol1, gol2;
		printf("Digite o nome do primeiro time:\n");
		scanf("%s", time1);
		printf("Digite o numero de gols marcados pelo %s:\n", time1);
		scanf("%d", &gol1);
		printf("Digite o nome do segundo time:\n");
		scanf("%s", time2);
		printf("Digite o numero de gols marcados pelo %s:\n", time2);
		scanf("%d", &gol2);	
		if (gol1 > gol2)
			printf("O vencedor eh o %s:", time1);
			else
				if (gol1 < gol2)
				printf("O vencedor eh o %s:", time2);
				else
					if (gol1 == gol2)
					printf("Ocorreu EMPATE na partida entre %s e %s", time1, time2);
}
