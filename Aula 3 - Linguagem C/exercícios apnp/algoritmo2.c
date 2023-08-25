#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main()
	{
		setlocale(LC_ALL, "Portuguese");
		int quant_filhos;
		float horas, valor_horas, sb;
		printf("Escreva o número de horas trabalhadas:\n");
		scanf("%f", &horas);
		printf("Valor da hora trabalhada:\n");
		scanf("%f", &valor_horas);
		printf("Quantidade de filhos menores de 14 anos:\n");
		scanf("%d", &quant_filhos);
		
		sb=(horas*valor_horas)+(horas*valor_horas)*(quant_filhos*0,02);
		
		printf("Salário final do funcionário: %.2f", sb);
	}
