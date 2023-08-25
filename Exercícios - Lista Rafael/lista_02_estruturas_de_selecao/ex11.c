// Escreva um algoritmo para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que ela nasceu).

#include <stdio.h>
#include <conio.h>

main() {
    int anonascimento, anovotacao;
    anovotacao = 2007;
    printf("Digite seu ano de nascimento:\n");
    scanf("%d", &anonascimento);
    if (anonascimento <= anovotacao)
        printf("APTO a votar!\n");
    else
        printf("INAPTO a votar!\n");
}