// Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius.

#include <stdio.h>
#include <conio.h>

main()
	{
		float c, f;
		printf("Digite a temperatura em graus Fahrenheit:\n");
		scanf("%f", &f);
		c = ((f-32)/9)*5;
		printf("A temperatura eh %.1f", c);
		getch();
	}
