//  Escreva um algoritmo para ler um valor e escrever a mensagem ‘É maior que 100 ‘ se o valor lido for maior que 100, caso contrário escrever ‘NÃO é maior que 100’

#include <stdio.h>
#include <conio.h>

main() {
    float valor;
    printf("Digite um valor:\n");
    scanf("%f", &valor);
    if (valor > 100)
        printf("E maior que 100\n");
    else
        printf("NAO eh maior que 100\n");
}