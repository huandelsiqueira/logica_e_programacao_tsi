// Escreva um algoritmo para ler o salário mensal e o percentual de reajuste. Calcular e escrever o valor do novo salário.

#include <stdio.h>
#include <conio.h>

main()
	{
		float salario, salarioNovo, reajuste;
		printf("Digite seu salario:\n");
		scanf("%f", &salario);
		printf("Digite o valor de reajuste percentual:\n");
		scanf("%f", &reajuste);
		salarioNovo = (salario * (reajuste/100)) + salario;
		printf("Salario reajustado eh R$: %.2f", salarioNovo);
		getch();
	}
