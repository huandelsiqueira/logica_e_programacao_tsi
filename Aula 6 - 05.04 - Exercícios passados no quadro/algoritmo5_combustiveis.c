#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	int tipoCombus;
	float litros, pALC, pGAS, pTOTAL, desc, pFINAL;
	printf("Escreva o tipo de combustivel - (1).Alcool e (2).Gasolina:\n");
	scanf("%d", &tipoCombus);
	printf("Escreva o numero de litros vendidos:\n");
	scanf("%f", &litros);
	if (tipoCombus == 1) {
		pALC = 4.30;
		pTOTAL = litros * pALC; 
	}
		if (litros <= 20)
			desc = pTOTAL * 0.03;
		else
			desc = pTOTAL * 0.05;
	if (tipoCombus == 2) {
		pGAS = 5.60;
		pTOTAL = litros * pGAS;
	}
		if (litros <= 15)
			desc = pTOTAL * 0.035;
		else
			desc = pTOTAL * 0.06;
	pFINAL = pTOTAL - desc;
	printf("O preco final com desconto eh: R$ %.2f", pFINAL);
}
