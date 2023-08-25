//  A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. Escreva um algoritmo para ler a quantidade de gols marcados pelo Internacional, a quantidade de gols marcados pelo Grêmio em um GRENAL, imprimindo o nome do time vitorioso ou a palavra EMPATE. Logo após escrever a mensagem "Novo GRENAL 1.Sim 2.Não?" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida, caso contrário deve ser encerrado imprimindo:
// • Quantos GRENAIS fizeram parte da estatística.
// • A quantidade de vitórias do Internacional.
// • A quantidade de vitórias do Grêmio.
// • A quantidade de Empates.
// • Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou NÃO HOUVE VENCEDOR).

#include <stdio.h>
#include <conio.h>

main() {
    int vitinter, vitgremio, jogos, empates, op, golsinter, golsgremio;
    vitinter = 0;
    vitgremio = 0;
    jogos = 0;
    empates = 0;
    do {
        jogos = jogos + 1;
        printf("Quantos gols o Inter marcou?\n");
        scanf("%d", &golsinter);
        printf("Quantos gols o Gremio marcou?\n");
        scanf("%d", &golsgremio);
        if (golsinter > golsgremio) {
            vitinter = vitinter + 1;
        } else if (golsinter < golsgremio) {
            vitgremio = vitgremio + 1;
        } else {
            empates = empates + 1;
        }
        printf("Novo greNAL? (1).SIM ou (2).NAO\n");
        scanf("%d", &op);
    } while (op == 1);
    printf("Qtd. de greNAIS = %d\n", jogos);
    printf("Vitorias do Inter = %d\n", vitinter);
    printf("Vitorias do Gremio = %d\n", vitgremio);
    printf("Qtd. de empates = %d\n", empates);
    if (vitinter > vitgremio) {
        printf("Inter venceu mais greNAIS.\n");
    } else {
        printf("Gremio venceu mais greNAIS.\n");
    }
}