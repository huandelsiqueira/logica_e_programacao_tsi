//  Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). 
// Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido). 
// Ao ser informado o código do combustível, o seu respectivo nome deve ser impresso na tela. O programa será encerrado quando o código informado for o número 4 escrevendo então a mensagem: "MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de combustível.

#include <stdio.h>
#include <conio.h>

main() {
    int op, diesel, gasolina, alcool;
    diesel = 0;
    alcool = 0;
    gasolina = 0;
    do {
        do {
            printf("Qual combustivel foi abastecido? (1).Alcool, (2).Gasolina, (3).Diesel ou (4).Fim\n");
            scanf("%d", &op);
        } while (op != 1 && op != 2 && op != 3 && op != 4);
        if (op == 1) {
            alcool = alcool + 1;
        } else if (op == 2) {
            gasolina = gasolina + 1;
        } else if (op == 3) {
            diesel = diesel + 1;
        } else if (op == 4) {
            printf("MUITO OBRIGADO!\n");
            printf("Alcool = %d\n", alcool);
            printf("Gasolina = %d\n", gasolina);
            printf("Diesel = %d\n", diesel);
        }
    } while (op != 4);
}
