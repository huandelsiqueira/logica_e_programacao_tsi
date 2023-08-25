#include <stdio.h>
#include <conio.h>

main()
	{
		float medida, p;
		int lado;
		printf("Escreva o numero de lados do poligono:\n");
		scanf("%d", &lado);
		printf("Escreva a medida do lado do poligono:\n");
		scanf("%f", &medida);
		if (lado == 3) {
			printf("Triangulo\n");
			p = 3*medida;
			printf("Perimetro: %.2f", p);
		}	
		else
			if(lado == 4) {
				printf("Quadrado\n");
				p= medida*medida;
				printf("Area: %.2f", p);
			}
			else
				if(lado == 5) {
					printf("Eh um pentagono");
				}
				else
					if(lado < 3)
						printf("Nao eh um poligono");
					else
						if (lado > 5)
							printf("Poligono nao identificado");
	}
