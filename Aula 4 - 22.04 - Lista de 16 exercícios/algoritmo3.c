// Escreva um algoritmo para ler uma temperatura em graus Celsius, calcular e escrever o valor correspondente em graus Fahrenheit.

#include <stdio.h>
#include <conio.h>

main()
	{
		float c,f;
		printf("Digite uma temperatura em graus Celsius:\n");
		scanf("%f", &c);
		f = ((1.8*c) + 32);
		printf("A temperatura em graus Fahrenheit eh %.1f:", f);
		getch();
	}

