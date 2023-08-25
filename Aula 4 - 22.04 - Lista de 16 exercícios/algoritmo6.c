// Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, calcular e escrever a média semestral e a seguinte mensagem: 'PARABÉNS! Você foi aprovado' somente se o alno foi aprovado.

#include <stdio.h>
#include <conio.h>

main()
	{
		float n1, n2, m;
		printf("Digite a primeira nota:\n");
		scanf("%f", &n1);
		printf("Digite a segunda nota:\n");
		scanf("%f", &n2);
		m = (n1+n2)/2;
		if (m >= 6)
			printf("APROVADO! Media = %.1f", m);
			else
				printf("REPROVADO! Media = %.1f", m);		
	}
