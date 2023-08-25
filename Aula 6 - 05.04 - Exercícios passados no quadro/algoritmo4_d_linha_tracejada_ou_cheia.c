#include <stdio.h>
#include <conio.h>

main() {
	float n;
	printf("Escreva um numero:\n");
	scanf("%f", &n);
	if (n < -5 || (n > 10 && n <25))
		printf("linha tracejada");
	else
		printf("linha cheia");
}
