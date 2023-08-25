// 3) ESCREVA UM FUNÇÃO PARA CALCULAR O DESCONTO DE UMA MERCADORIA. COLOCAR O VALOR DA MERCADORIA E O DESCONTO. DEVERÁ RETORNAR O VALOR COM DESCONTO.

#include <stdio.h>
#include <conio.h>

float mercadoria(float valor, float desconto);

main () {
    float valor, desconto;
    printf("Digite o valor da mercadoria:\n");
    scanf("%f", &valor);
    printf("Digite o desconto que a mercadoria ira receber:\n");
    scanf("%f", &desconto);
    mercadoria(valor, desconto);
    return 0;
}

float mercadoria(float valor, float desconto) {
    float total, percentual;
    percentual = 100 - desconto;
    total = valor * (percentual*0.01);
    printf("O valor total com desconto da mercadoria eh: R$ %.2f", total);
    return total;
}