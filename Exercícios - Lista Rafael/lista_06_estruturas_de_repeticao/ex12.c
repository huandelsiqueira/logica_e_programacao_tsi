// Reescreva o algoritmo do exercício 11 validando a resposta do usuário para a pergunta “Novo Cálculo (1.Sim 2.Não)?” (aceitar apenas os códigos 1 ou 2).

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
        do {
            printf("Novo calculo? (1).SIM ou (2).NAO\n");
            scanf("%d", &op);
        } while (op != 1 && op != 2);
    } while (op == 1);
}