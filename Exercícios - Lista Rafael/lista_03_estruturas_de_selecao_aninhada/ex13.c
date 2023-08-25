// Um posto está vendendo combustíveis com a seguinte tabela de descontos: 
// • Álcool: Até 20 litros, desconto de 3 % por litro.
// • Acima de 20 litros, desconto de 5 % por litro.
// • Gasolina: até 15 litros, desconto de 3,5 % por litro. 
// • Acima de 15 litros, desconto de 6 % por litro 
// Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: 1-álcool 2-Gasolina), calcule e imprima o valor a ser pago pelo cliente, sabendo-se que o preço da gasolina é de R$ 6,53 o litro e o álcool R$ 5,47. 

#include <stdio.h>
#include <conio.h>

main() {
    int tipocombustivel;
    float litros, totalcompra, descontogasolina, descontoalcool, precogasolina, precoalcool;
    precogasolina = 6.53;
    precoalcool = 5.41;
    descontogasolina = 1 - (3.5 / 100);
    descontoalcool = 1 - (3 / 100);
    printf("Digite o tipo de combustivel (1).Alcool ou (2).Gasolina:\n");
    scanf("%d", &tipocombustivel);
    printf("Digite a quantidade de litros abastecida:\n");
    scanf("%f", &litros);
    if (tipocombustivel == 1 && litros > 20) {
        descontoalcool = 1 - (5 / 100);
        totalcompra = (litros * precoalcool) * descontoalcool;
    }
    else
        if (tipocombustivel == 2 && litros > 15) {
            descontogasolina = 1 - (6 / 100);
            totalcompra = (litros * precogasolina) * descontogasolina;
        }
    totalcompra = (litros * precoalcool) * descontoalcool;
    totalcompra = (litros * precogasolina) * descontogasolina;
    printf("O preco da compra eh: R$ %.2f\n", totalcompra);
}