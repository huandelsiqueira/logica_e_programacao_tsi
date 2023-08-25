#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	float n;
	printf("Escreva um numero:\n");
	scanf("%f", &n);
	if (n > 0)
		printf("LINHA TRACEJADA");
	else
		printf("LINHA CHEIA");
}
