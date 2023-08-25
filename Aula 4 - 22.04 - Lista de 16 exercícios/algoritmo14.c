// As maçãs custam R$ 0,30 se forem compradas menos do que uma dúzia, e R$ 0,25 se forem compradas pelo menos doze. Escreva um algoritmo que leia o número de maçãs compradas, calcule e escreva o valor total da compra.

#include <stdio.h>
#include <conio.h>

main()
	{
		int quantidade;
		float valor;
		printf("Digite a quantidade de macas compradas:\n");
		scanf("%d", &quantidade);
		if (quantidade >= 12)
			valor = (0.25*quantidade);
			else
				valor = (0.30*quantidade);
		printf("Valor total da compra eh: R$ %.2f", valor);
	}
