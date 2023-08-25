// Escreva um algoritmo para ler um número inteiro e escrevê-lo na tela 10 vezes utilizando uma estrutura de repetição.

#include <stdio.h>
#include <conio.h>

main() {
    int i, num;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    for (i = 0; i <= 9; i++) {
        printf("%d ", num);
    }
}