//// 1) SABENDO QUE O PREÇO DA GASOLINA É DE R$ 5,50 O LITRO E O ALCOOL R$ 4,80 O LITRO, ESCREVA UMA FUNÇÃO QUE RECEBA O TIPO DE COMBUSTÍVEL CODIFICADO DA SEQUINTE FORMA 1-GASOLINA, 2-ALCOOL E O N° DE LITROS. DEVERÁ SER IMPRESSO O TOTAL DA COMPRA.
// COMBUST (1,20) - 1 É O TIPO DE COMBUSTÍVEL E 20 É O N° DE LITROS.
//2) RETORNE O VALOR PARA O PROGRAMA PRINCIPAL E DÊ UM DESCONTO, CASO O VALOR DA CONTA ULTRAPASSE R$100,00. DESCONTO DE 10%.

#include <stdio.h>
#include <conio.h>

float posto(int tc, float lc, float total);

main() {
    int tc;
    float lc, total;
    printf("Digite o tipo de combustivel: (1).Gasolina ou (2).Alcool\n");
    scanf("%d", &tc);
    printf("Digite a quantidade de litros abastecida:\n");
    scanf("%f", &lc);
    posto(tc, lc, total);
    return 0;
}

float posto(int tc, float lc, float total) {
    if (tc == 1)
        total = lc * 5.50;
        else
            total = lc * 4.80;
    if (total > 100) 
        total = total * 0.9;
    printf("O total da compra eh: R$ %.2f", total);
    return total;
}
