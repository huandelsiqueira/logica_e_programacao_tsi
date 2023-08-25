// Ler 10 notas e escrever a maior e a menor nota lida.
// -Para determinar a maior: 
	//Inicializar a variável que representa o maior com o MENOR VALOR POSSÍVEL.==> nota = 0 
// -Para determinar a menor:
	//Inicializar a variável que representa o menor com o MIAOR VALOR POSSÍVEL.==> nota = 10

#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	int alunos, i;
	float nota, media;
	for (i = 1; i <= alunos; i++) {
		do {
			printf("Digite o numero de alunos:\n");
			scanf("%d", &alunos);
		} while (alunos < 0);
	printf("%d. Digite a nota do aluno:\n");
	scanf("%f", &nota);
	}
}
