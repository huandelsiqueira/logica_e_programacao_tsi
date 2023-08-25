// Escreva um algoritmo para ler um número inteiro (considere que serão lidos apenas valores positivos e inteiros) e escrever se é par ou ímpar.

#include <stdio.h>
#include <conio.h>

main()
	{
		int numero;
		printf("Digite um numero inteiro:\n");
		scanf("%d", &numero);
		if ((numero%2) == 0 && numero > 0)
			printf("Numero PAR");
			else
				if ((numero%2) == 1 && numero > 0)
					printf("Numero IMPAR");
	}
