//  Escreva um algoritmo para ler um número inteiro (considere que serão lidos apenas valores positivos e inteiros) e escrever se é par ou ímpar.

#include <stdio.h>
#include <conio.h>

main() {
    int valor;
    printf("Digite um valor (apenas valores positivos e inteiros):\n ");
    scanf("%d", &valor);
    if (valor % 2 == 0)
        printf("Eh PAR.\n");
    else
        printf("Eh IMPAR.\n");

}