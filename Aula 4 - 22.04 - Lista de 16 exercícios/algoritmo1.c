// Escreva um algortimo para ler um valor inteiro e escrever o seu antecessor.

#include <stdio.h>
#include <conio.h>

main()
	{
		int valor, antecessor;
		printf("Digite um Valor:\n");
		scanf("%d", &valor); // "%d" = tipo da variável e "&valor" = nome da variável | "%d" = inteiro | "%f" = float | "%c" = caractere | "%s" = string
		antecessor = valor - 1;
		printf ("O antecessor eh %d", antecessor); // "%d" é a máscara da variável | "antecessor" é a variável
		getch(); 	
	}
