#include <stdio.h>
#include <conio.h>

main()
	{
		int a, b, c;
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		if (a==1)
			printf("Verde\n");
		if (a!=1 && b==2 && c==3)
			printf("UCPel\n");
		if (a!=1 && b==2 && c!=3) {
			printf("Uva\n");
			printf("Pera\n");
		}
		if (a!=1 && b!=2)
			printf("Preto\n");
		printf("Violeta");
	}
