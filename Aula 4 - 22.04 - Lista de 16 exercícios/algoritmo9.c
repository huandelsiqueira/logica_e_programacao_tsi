// Escreva um algoritmo para ler um valor e escrever se é positivo ou negativo. Considere o valor zero como positivo.

#include <stdio.h>
#include <conio.h>

main()
	{
		int numero;
		printf("Digite um numero:\n");
		scanf("%d", &numero);
		if (numero >= 0)
			printf("Eh um numero POSITIVO");
			else
				printf("Eh um numero NEGATIVO");
	}
