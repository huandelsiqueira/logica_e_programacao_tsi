#include <stdio.h>
#include <conio.h>

main() {
    float marcainicial, marcafinal, litros, pagamento, media, lucro;
    printf("Digite a marcacao inicial do dia:\n");
    scanf("%f", &marcainicial);
    printf("Digite a marcacao final do dia:\n");
    scanf("%f", &marcafinal);
    printf("Digite a quantidade de combustivel gasto:\n");
    scanf("%f", &litros);
    printf("Digite o valor do pagamento recebido:\n");
    scanf("%f", &pagamento);
    media = (marcafinal - marcainicial) / litros;
    lucro = pagamento - (2.5 * litros);
    printf("Media de consumo = %.2f litros\n", media);
    printf("Lucro = R$ %.2f", lucro);
}