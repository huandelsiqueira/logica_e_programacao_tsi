// Ler o número de alunos existentes em uma turma, ler as notas desses alunos e calcular a média aritmética dessas notas.

#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	float nota, maior, menor;
	int i;
	menor = 10;
	maior = 0;
	for (i = 1; i <= 10; i++) {
		do {
			printf("%d. Escreva uma nota:\n", i);
			scanf("%f", &nota);
		} while (nota < 0 || nota > 10);
	if (nota > maior)
		maior = nota;
	else
		if (nota < menor)
			menor = nota;
	}
	printf("A maior nota eh: %.2f\n", maior);
	printf("A menor nota eh: %.2f\n", menor);
}
