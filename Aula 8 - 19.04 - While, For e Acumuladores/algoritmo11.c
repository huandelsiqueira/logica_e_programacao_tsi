// Ler 10 pares de dados contendo o sexo e a altura de uma turma de pessoas. Calcular a média das alturas dos homens e a média das alturas das mulheres.

#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	float alt, mediaH, mediaM, somaH, somaM;
	int i, sexo, h, m;
	somaH = 0;
	somaM = 0;
	h = 0;
	m = 0;
	for (i = 1; i <= 10; i++) {
		do {
			printf("%d. Escreva o sexo: (1).HOMEM e (2).MULHER\n", i);
			scanf("%d", &sexo);
		} while (sexo != 1 && sexo != 2);
		do {
			printf("Escreva a altura da pessoa em 'metros':\n");
			scanf("%f", &alt);
		} while (alt < 0);
		if (sexo == 1) {
			h = h + 1;
			somaH = somaH + alt;
			mediaH = somaH / h;
		}
		else 
			if (sexo == 2) {
				m = m + 1;
				somaM = somaM + alt;
				mediaM = somaM / m;
			}
	}
	printf("A media de alturas dos homens eh = %.1f m\n", mediaH);
	printf("A media de alturas das mulheres eh = %.1f m\n", mediaM);
}
