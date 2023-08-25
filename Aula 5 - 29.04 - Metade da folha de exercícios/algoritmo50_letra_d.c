#include <stdio.h>
#include <conio.h>

main()
	{
		int a, b;
		scanf("%d e %d", &a, &b);
		printf("Amarelo\n");
		if (a==1) {
			printf("Azul\n");
			printf("Verde\n");
			printf("Roxo\n");
		}
		else
			printf("Pera\n");
			if (a!=1 && b==1)
				printf("Maca\n");
			else 
				if (a!=1 && b!=1) {
					printf("Morango\n");
				}
		printf("Uva");
	}
