// Escreva um algoritmo para ler 2 valores (considere que não serão lidos valores iguais) e escrever o maior deles.

#include <stdio.h>
#include <conio.h>

main()
	{
		float n1, n2;
		printf("Digite o primeiro numero:\n");
		scanf("%f", &n1);
		printf("Digite o segundo numero:\n");
		scanf("%f", &n2);
		if (n1 > n2 && n1 != n2)
			printf("O numero maior eh: %1.f", n1);
			else
				if (n2 > n1 && n1 != n2)
					printf("O numero maior eh: %.1f", n2);
	}
