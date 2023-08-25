#include <stdio.h>
#include <conio.h>

main() {
	int a, b, c;
	printf("Escreva valores para A, B e C:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a > b && a > c)
		printf("%d", a);
	else
		if (b > c)
			printf("%d", b);
		else
			printf("%d", c);
}
