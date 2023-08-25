// Escreva um algoritmo para ler um valor e escrever a mensagem 'É maior que 10' se o valor lido for maior que 10, caso contrário, escrever 'Não é maior que 10'.

#include <stdio.h>
#include <conio.h>

main()
	{
		float numero;
		printf("Digite um numero:\n");
		scanf("%f", &numero);
		if (numero > 10)
			printf("Eh maior que 10");
			else
				printf("NAO eh maior que 10");
	}
