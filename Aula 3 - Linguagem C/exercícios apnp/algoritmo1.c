#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main()
	{
		setlocale(LC_ALL, "Portuguese");
		int a, b, c;
		float area;
		printf("Escreva um valor para A:\n");
		scanf("%d", &a);
		printf("Escreva um valor para B:\n");
		scanf("%d", &b);
		printf("Escreva um valor para C:\n");
		scanf("%d", &c);
		area = (a*b)/2;
		printf("A �rea do tri�ngulo de lado 'A' e 'B' �: %.2f\n", area);
		area = (b*b);
		printf("A �rea do quadrado de lado 'B' %.2f\n", area);
		area = (a*b);
		printf("A �rea do ret�ngulo de lado 'A' e 'B' �: %.2f\n", area);
		area = (M_PI*(c*c));
		printf("A �rea do c�rculo �: %.4f", area);
		getch();
	}
