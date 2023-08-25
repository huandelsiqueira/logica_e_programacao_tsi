// Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, calcular e escrever a média semestral e a seguinte mensagem: 'PARABÉNS! Você foi aprovado' somente se o alno foi aprovado. Acrescente a mensagem: 'Você foi REPROVADO! Estude mais', caso a média calculada seja menor que 6,0.

#include <stdio.h>
#include <conio.h>

main()
	{
		float n1, n2, m;
		printf("Digite sua primeira nota:\n");
		scanf("%f", &n1);
		printf("Digite sua segunda nota:\n");
		scanf("%f", &n2);
		m = (n1+n2)/2;
		if (m >= 6)
			printf("PARABENS, Voce foi aprovado!\n");
			else
				printf("Voce foi REPROVADO! Estude mais.\n");
		printf("Sua media final eh: %.1f,", m);
	}
