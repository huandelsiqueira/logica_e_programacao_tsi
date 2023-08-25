// As maçãs custam R$ 1,25 se forem compradas menos do que uma dúzia, e R$ 1,00 ser forem compradas pelo menos doze. Escreva um algoritmo que leia o número de maçãs compradas, calcule e escreva o valor total da compra.

#include <stdio.h>
#include <conio.h>

main() {
    int quantidade;
    float preco;
    printf("Digite a quantidade de macas compradas:\n");
    scanf("%d", &quantidade);
    if (quantidade >= 12)
        preco = quantidade * 1;
    else
        preco = quantidade * 1.25;
    printf("Valor total da compra = R$ %.2f\n", preco);
}