#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	int n1, n2, n3;
	printf("Escreva 3 valores:\n");
	scanf("%d", n1);
	scanf("%d", n2);
	scanf("%d", n3);
	if (n1 > n3 && n2 > n3)
		soma = n1 + n2;
	else
		if (n2 > n1 && n3 > n1)
			soma = n2 + n3;
		else
			soma = n3 + n1;
}
