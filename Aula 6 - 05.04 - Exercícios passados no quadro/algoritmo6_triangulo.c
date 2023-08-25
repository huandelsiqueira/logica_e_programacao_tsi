#include <stdio.h>
#include <conio.h>

main() {
	float a1, a2, a3;
	printf("Escreva o valor dos tres triangulos:\n");
	scanf("%f", &a1);
	scanf("%f", &a2);
	scanf("%f", &a3);
	if (a1 > 90 || a2 > 90 || a3 > 90)
		printf("Triangulo OBTUSANGULO");
	else
		if (a1 == 90 || a2 == 90 || a3 == 90)
			printf("Triangulo RETANGULO");
		else
			printf("Triangulo ACUTANGULO");
}
