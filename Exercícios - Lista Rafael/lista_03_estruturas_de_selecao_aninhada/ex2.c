// Escreva um algoritmo para ler a quantidade de gols marcados pelo Pelotas e a quantidade de gols marcados pelo Brasil em um clássico BRA-PEL. Escrever o nome do vencedor. Caso não haja vencedor deverá ser impressa a palavra EMPATE.

#include <stdio.h>
#include <conio.h>

main() {
    int golsbrasil, golspelotas;
    printf("--Classico BRA-PEL--\n\n");
    printf("Digite quantos gols o Brasil de Pelotas marcou:\n");
    scanf("%d", &golsbrasil);
    printf("Digite quantos gols o Pelotas marcou:\n");
    scanf("%d", &golspelotas);
    if (golsbrasil == golspelotas)
        printf("O jogo entre Brasil de Pelotas e Pelotas terminou em EMPATE!\n");
    else
        if (golsbrasil > golspelotas)
            printf("Brasil de Pelotas foi o VITORIOSO da partida!\n");
        else
            printf("Pelotas foi o VITORIOSO da partida!\n");
}