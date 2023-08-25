//  Uma empresa de roupas resolveu fazer uma promoção especial e conceder um desconto de 18 % sobre o preço de venda de todo seu estoque. Escreva um algoritmo que leia o preço de venda antes da promoção e calcule quanto deve ser o preço promocional.

#include <stdio.h>
#include <conio.h>

main() {
    float precoinicial, precofinal;
    printf("Digite o preco da roupa:\n");
    scanf("%f", &precoinicial);
    precofinal = precoinicial * 0.82;
    printf("O preco da roupa com desconto eh: R$ %.2f", precofinal);
}