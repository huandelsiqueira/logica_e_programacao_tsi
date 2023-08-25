// Um posto está vendendo combustíveis com a seguinte tabela de descontos:
//      Álcool: Até 20 litros, desconto de 3 % por litro.
//      Acima de 20 litros, desconto de 5 % por litro.

//      Gasolina: Até 15 litros, desconto de 3,5 % por litro.
//      Acima de 15 litros, desconto de 6 % por litro.
// Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: 1-álcool 2-Gasolina), o preço do combustível, calcule e imprima o valor a ser pago pelo cliente. OBS: Considere que serão informados apenas códigos válidos.

#include <stdio.h>
#include <conio.h>

main() {
    int tipocombustivel;
    float litros, precocombustivel, total;
    printf("Digite o tipo de combustivel abastecido (1).Alcool ou (2).Gasolina:\n");
    scanf("%d", &tipocombustivel);
    printf("Digite a quantidade de litros abastecida:\n");
    scanf("%f", &litros);
    printf("Digite o preco do combustivel/L:\n");
    scanf("%f", &precocombustivel);
    if (tipocombustivel == 1) {
        if (litros <= 20) {
            total = (precocombustivel * litros) * 0.97;
        } else {
            total = (precocombustivel * litros) * 0.95;
        }
    } else if (tipocombustivel == 2) {
        if (litros <= 15) {
            total = (precocombustivel * litros) * 0.965;
        } else {
            total = (precocombustivel * litros) * 0.94; 
        }
    }
    printf("O preco final da compra com desconto eh: R$ %.2f\n", total);
}