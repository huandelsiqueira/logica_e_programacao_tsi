// 1) SABENDO QUE O PREÇO DA GASOLINA É DE R$ 5,50 O LITRO E O ALCOOL R$ 4,80 O LITRO, ESCREVA UMA FUNÇÃO QUE RECEBA O TIPO DE COMBUSTÍVEL CODIFICADO DA SEQUINTE FORMA: 1-GASOLINA, 2-ALCOOL E O N° DE LITROS. DEVERÁ SER IMPRESSO O TOTAL DA COMPRA.
// COMBUST (1,20) - 1 É O TIPO DE COMBUSTÍVEL E 20 É O N° DE LITROS.

#include <stdio.h>
#include <conio.h>

void combustivel(int tipocombustivel, float litroscombustivel);

main() {
    int tipocombustivel;
    float litroscombustivel, total;
    printf("Digite o tipo de combustivel: (1).Gasolina ou (2).Alcool\n");
    scanf("%d", &tipocombustivel);
    printf("Digite a quantidade de litros abastecida:\n");
    scanf("%f", &litroscombustivel);
    combustivel(tipocombustivel, litroscombustivel);
    return 0;
}

void combustivel(int tipocombustivel, float litroscombustivel) {
    float total;
    if (tipocombustivel == 1)
        total = litroscombustivel * 5.50;
        else
            total = litroscombustivel * 4.80;
    printf("O total da compra eh: R$ %.2f", total);
}