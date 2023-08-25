// Escreva um algoritmo para ler 2 valores (aceitar somente valores positivos) e uma opção (aceitar somente valores do 1 ao 4). Dependendo da opção, efetuar as seguintes operaçõoes matemáticas com os valores. Escrever a mensagem "Novo cálculo? 1.sim 2.não". Se for respondido "1", deverá efetuar nova operação, caso contrário, deverá encerrar o algoritmo e mostar quantos cálculos foram feitos.
// opções = operação
//	1	=	adição
//	2	=	subtração
//	3	=	divisão
//	4	=	multiplicação

#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	float v1, v2, operacao;
	int op, resp, c;
	c = 0;
	do {
		c = c + 1;
		do {
			printf("Escreva o primeiro valor:\n");
			scanf("%f", &v1);
		} while (v1 < 0);
		do {
			printf("Escreva o segundo valor:\n");
			scanf("%f", &v2);
		}while (v2 < 0);
		printf("Escreva a operacao desejada: (1).ADICAO, (2).SUBTRACAO, (3).DIVISAO e (4).MULTIPLICACAO\n");
		scanf("%d", &op);
		if (op == 1)
			operacao = v1 + v2;
		if (op == 2)
			operacao = v1 - v2;
		if (op == 3)
			operacao = v1 / v2;
		if (op == 4)
			operacao = v1 * v2;
		printf("O valor eh: %.2f\n", operacao);
		do {
			printf("Novo calculo? (1).SIM ou (2).NAO\n");
			scanf("%d", &resp);
		} while (resp != 1 && resp != 2);
	}while (resp == 1);
	printf("O numero de calculos executados eh: %d", c);
}
