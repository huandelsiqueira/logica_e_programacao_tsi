// Reescreva o algoritmo do exercício 1, para que seja impressa no final, a quantidade de alunos aprovados, reprovados ou que ficaram em exame. Considere as seguintes regras:
// • Alunos aprovados: Média igual ou superior a 6.
// • Alunos reprovados: Média inferior a 3.
// • Alunos em exame: Média inferior a 6, mas superior ou igual a 3.

#include <stdio.h>
#include <conio.h>

main() {
    float n1, n2, media;
    int op, aprovados, reprovados, exame;
    aprovados = 0;
    reprovados = 0;
    exame = 0;
    do {
        printf("Digite a primeira nota:\n");
        scanf("%f", &n1);
        printf("Digite a segunda nota:\n");
        scanf("%f", &n2);
        media = (n1 + n2) / 2;
        if (media >= 6) {
            aprovados = aprovados + 1;
        } else if (media >= 3 && media < 6) {
            exame = exame + 1;
        } else {
            reprovados = reprovados + 1;
        }
        printf("Media = %.2f\n", media);
        printf("Calcular a media de outro aluno? (1).SIM ou (2).NAO\n");
        scanf("%d", &op);
    } while (op == 1);
    printf("Aprovados = %d\n", aprovados);
    printf("Reprovados = %d\n", reprovados);
    printf("Exame = %d\n", exame);
}