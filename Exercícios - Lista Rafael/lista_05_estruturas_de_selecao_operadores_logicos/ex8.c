// Um mercado está vendendo frutas com a seguinte tabela de preços:
// Até 5 Kg                         Acima de 5 Kg
//Morango: R$ 5,00 p/Kg             Morango: R$ 4,00 p/Kg
//Maçã: R$ 3,00 p/Kg                Maçã:R$ 2,00 p/Kg
//Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 35,00, receberá ainda um desconto de 20 % sobre esse total. Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maçãs adquiridas e escreva o valor a ser pago pelo cliente.

#include <stdio.h>
#include <conio.h>

main() {
    float qtmorango, qtmaca, precomorango, precomaca, qttotal, totalcompra;
    printf("Digite a quantidade de morangos comprada (em Kg):\n");
    scanf("%f", &qtmorango);
    printf("Digite a quantidade de macas comprada (em Kg):\n");
    scanf("%f", &qtmaca);
    precomorango = 5.00;
    precomaca = 3.00;
    qttotal = qtmorango + qtmaca;
    if (qttotal > 5) {
        precomorango = 4.00;
        precomaca = 2.00;
    }
    totalcompra = (precomorango * qtmorango) + (precomaca * qtmaca); 
    if (qttotal > 8 || totalcompra > 35)
        totalcompra = totalcompra * 0.8;
    printf("O total da compra eh: R$ %.2f\n", totalcompra);
}