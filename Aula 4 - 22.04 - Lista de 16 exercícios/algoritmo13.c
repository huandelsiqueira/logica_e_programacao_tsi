// Tendo como entrada a altura e o sexo de uma pessoa, construa o algoritmo que calcule e imprima seu peso ideal, utilizando as seguintes fórmulas:
//	-para homens: (72*h)-58
//	-para mulheres: (62.1*h)-44.7

#include <stdio.h>
#include <conio.h>

main()
	{
		char sexo;
		float altura, peso, pesoatual, imc;	
		printf("Digite seu sexo a seguir no formato (M/F):\n");
		scanf("%c", &sexo);
		printf("Digite sua altura a seguir (metros):\n");
		scanf("%f", &altura);
		if (sexo == 'M' || sexo == 'm')
			{
				peso = ((72.7*altura) - 58);
				printf("Seu peso ideal em Kg eh: %.2f\n", peso);
			}
			else
				if (sexo == 'F' || sexo == 'f')
					{
						peso = ((62.1*altura) - 44.7);
						printf("Seu peso ideal em Kg eh: %.2f\n", peso);
					}
		printf("Digite seu peso atual:\n");
		scanf("%f", &pesoatual);
		imc = peso / (altura*altura);
		printf("Seu IMC eh: %.2f\n", imc);
		if (pesoatual < 18.5)
			printf("MAGRO");
			else
				if (pesoatual > 18.5 || pesoatual < 24.9)
					printf("NORMAL");
					else
						if (pesoatual > 25.0 && pesoatual < 29.9)
						printf("SOBREPESO");
						else
							if (pesoatual > 30.0 && pesoatual < 39.9)
							printf("OBESIDADE");
							else
								if(pesoatual > 40.0)
								printf("OBESIDADE GRAVE");
}
