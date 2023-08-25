#include <stdio.h>
#include <conio.h>

main () {
	int a, b, c;
	printf("Escreva valores inteiros para A, B e C:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a > b && a > c)
			printf("O maior numero eh: %d", a);
		else 
		if (b > c)
			printf("O maior numero eh: %d", b);
		else
			printf("O maior numero eh: %d", c);
}
