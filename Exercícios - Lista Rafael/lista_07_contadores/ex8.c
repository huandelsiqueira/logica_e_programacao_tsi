// A Federação Pelotense de Futebol necessita um software para fazer uma estatística sobre os torcedores dos clubes pelotenses. Escreva um algoritmo para ler uma quantidade indeterminada de duplas de valores representando o código do time (1.Brasil 2.Pelotas 3.Farroupilha) e a idade do torcedor. O algoritmo termina ao ser fornecido um código inválido (nesta situação a idade não deve ser lida). Calcular e escrever o percentual de torcedores de cada time em relação ao total, e a quantidade de torcedores do Brasil com idade entre 15 (inclusive) e 20 (inclusive) anos.

#include <stdio.h>
#include <conio.h>

main() {
    int idadebrasil, brasil, pelotas, farroupilha, idade, time, total;
    float percbrasil, percpelotas, percfarroupilha;
    idadebrasil = 0;
    brasil = 0;
    pelotas = 0;
    farroupilha = 0;
    total = 0;
    do {
        printf("Digite seu time: (1).Brasil, (2).Pelotas ou (3).Farroupilha\n");
        scanf("%d", &time);
        if (time == 1 || time == 2 || time == 3) {
            total = total + 1;
            printf("Digite sua idade:\n");
            scanf("%d", &idade);
            if (time == 1) {
                brasil = brasil + 1;
                percbrasil = (brasil * 100) / total;
                if (idade >= 15 && idade <= 20) {
                    idadebrasil = idadebrasil + 1;
                }
            } else if (time == 2) {
                pelotas = pelotas + 1;
                percpelotas = (pelotas * 100) / total;
            } else if (time == 3) {
                farroupilha = farroupilha + 1;
                percfarroupilha = (farroupilha * 100) / total;
            }
        }
    } while (time == 1 || time == 2 || time == 3);
    printf("Percentual de torcedores do Brasil = %.2f\n", percbrasil);
    printf("Percentual de torcedores do Pelotas = %.2f\n", percpelotas);
    printf("Percentual de torcedores do Farroupilha = %.2f\n", percfarroupilha);
    printf("Torcedores do Brasil entre 15 e 20 anos de idade = %d\n", idadebrasil);
}