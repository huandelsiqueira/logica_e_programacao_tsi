// Escreva um algoritmo para ler 2 valores (conside que não serão lidos valores iguais) e escrevê-los em ordem crescente.

#include <stdio.h>
#include <conio.h>

main()
	{
		float n1, n2;
		printf("Digite o primeiro valor:\n");
		scanf("%f", &n1);
		printf("Digite o segundo valor:\n");
		scanf("%f", &n2);
		if	(n1 > n2 && n1 != n2)
			printf("%.1f", n1, n2);
			else 
				if(n1 < n2 && n1 != n2)
					printf("%.1f", n2, n1);
	}
