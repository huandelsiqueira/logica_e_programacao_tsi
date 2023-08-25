// Reescreva o algoritmo para o problema 10 de forma que no final seja impressa a mensagem “Novo cálculo (1.Sim 2.Não)” solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não executar o algoritmo novamente. Se for informado o código 1 deve ser repetida a execução de todo o algoritmo para permitir um novo cálculo, caso contrário ele deve ser encerrado.

#include <stdio.h>
#include <conio.h>

main() {
    int op;
    float n1, n2, media;
    do {
        do {
            printf("Digite a primeira nota:\n");
            scanf("%f", &n1);
            if (n1 < 0 || n1 > 10) {
                printf("Nota invalida.\n");
            }
        } while (n1 < 0 || n1 > 10);
        do {
            printf("Digite a segunda nota:\n");
            scanf("%f", &n2);
            if (n2 < 0 || n2 > 10) {
                printf("Nota invalida.\n");
            }
        } while (n2 < 0 || n2 > 10);
        media = (n1 + n2) / 2;
        printf("Media = %.2f\n", media);
        printf("Novo calculo? (1).SIM ou (2).NAO\n");
        scanf("%d", &op);
    } while (op == 1);
}