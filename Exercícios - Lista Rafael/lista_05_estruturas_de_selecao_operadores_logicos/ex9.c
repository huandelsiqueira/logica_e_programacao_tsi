// Para participar da categoria OURO do 1o. Campeonato Mundial de bolinha de Gude o jogador deve pesar entre 70 Kg (inclusive) e 80 Kg (inclusive) e medir de 1,75 m (inclusive) a 1,90 m (inclusive). Escreva um algoritmo para ler a altura e o peso de um jogador e determine se o jogador está apto a participar do campeonato escrevendo uma das seguintes mensagens conforme cada situação:

// “RECUSADO POR ALTURA” - (se somente a altura do jogador for inválida)
// “RECUSADO POR PESO” - (se somente o peso do jogador for inválido)
// “TOTALMENTE RECUSADO”-(se a altura e o peso do jogador for inválido)
// “ACEITO” - (se a altura e o peso do jogador estiverem dentro da faixa especificada)

#include <stdio.h>
#include <conio.h>

main() {
    float altura, peso;
    printf("Digite sua altura (em metros):\n");
    scanf("%f", &altura);
    printf("Digite seu peso (em Kg):\n");
    scanf("%f", &peso);
    if ((altura >= 1.75 && altura <= 1.90) && (peso >= 70 && peso <= 80)) {
        printf("Participante ACEITO!\n");
    } else if ((altura < 1.75 || altura > 1.90) && (peso < 70 || peso > 80)) {
        printf("Participante RECUSADO!\n");
    } else if (altura < 1.75 || altura > 1.90) {
        printf("Participante RECUSADO PELA ALTURA!\n");
    } else if (peso < 70 || peso > 80) {
        printf("Participante RECUSADO PELO PESO!\n");
    }
}