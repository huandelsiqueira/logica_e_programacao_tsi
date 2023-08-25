#include <stdio.h>
#include <conio.h>

main() {
	float n;
	printf("Escreva um numero:\n");
	scanf("%f", &n);
	if (n < 10 || (n > 10 && n < 20 || n > 20 && n < 30))
		printf("tracejada");
	else
		printf("cheia");
}
