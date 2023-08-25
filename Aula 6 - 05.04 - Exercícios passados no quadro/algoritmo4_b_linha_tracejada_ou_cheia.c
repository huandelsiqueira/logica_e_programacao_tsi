#include <stdio.h>
#include <conio.h>

main() {
	float n;
	printf("Escreva um numero:\n");
	scanf("%f", &n);
	if (n >= 80) 
		printf("linha cheia");
	else
		printf("linha tracejada");
}
