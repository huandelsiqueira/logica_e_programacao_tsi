// Escreva um algoritmo para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que ela nasceu).

#include <stdio.h>
#include <conio.h>

main()
	{
		int ano;
		printf("Digite o ano de nascimento:\n");
		scanf("%d", &ano);
		if (ano <= 2007)
			printf("APTO a votar");
			else
				printf("INAPTO a votar");
	}
