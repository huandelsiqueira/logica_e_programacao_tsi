// A empresa Vestebem resolveu fazer uma promoção especial e conceder um desconto de 30% sobre o preço de venda de todo seu estoque. Escreva um algoritmo que leia o preço de venda antes da promoção e calcule quanto deve ser o preço promocional.

#include <stdio.h>
#include <conio.h>

main()
	{
		float preco, desconto, precodescontado;
		printf("Digite o preco atual:\n");
		scanf("%f", &preco);
		desconto = 0.7;
		precodescontado = preco * desconto;
		printf("Preco promocional eh R$: %.2f", precodescontado);
		getch();
	}
