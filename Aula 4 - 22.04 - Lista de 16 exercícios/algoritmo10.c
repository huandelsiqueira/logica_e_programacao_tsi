// Escreva um algoritmo pque verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número '8190'. Deve ser impresso as seguintes mensagens:
//	-'ACESSO PERMITIDO', caso a senha seja válida.
//	-'ACESSO NEGADO', caso a senha seja inválida.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
	{
		int senha;
		senha = 8190;
		printf("Digite a senha:\n");
		scanf("%d", &senha);
		if (senha == 8190) {
			system("color 2");
			printf("ACESSO PERMITIDO!");
		}
			else {
				system("color 4");
				printf("ACESSO NEGADO!");
			}
	}
