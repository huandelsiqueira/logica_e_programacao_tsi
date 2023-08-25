// Reescreva o algoritmo do exercício 2, para que seja impresso no final, o percentual de alunos aprovados, reprovados ou em exame em relação a quantidade total de alunos cujas notas foram informadas.

#include <stdio.h>
#include <conio.h>

main() {
    float n1, n2, media, percaprovados, percreprovados, percexame;
    int op, aprovados, reprovados, exame, totalalunos;
    totalalunos = 0;
    aprovados = 0;
    reprovados = 0;
    exame = 0;
    do {
        totalalunos = totalalunos + 1;
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
        percaprovados = (aprovados * 100) / totalalunos;
        percreprovados = (reprovados * 100) / totalalunos;
        percexame = (exame * 100) / totalalunos;
        printf("Media = %.2f\n", media);
        printf("Calcular a media de outro aluno? (1).SIM ou (2).NAO\n");
        scanf("%d", &op);
    } while (op == 1);
    printf("Aprovados = %d\n", aprovados);
    printf("Reprovados = %d\n", reprovados);
    printf("Exame = %d\n", exame);
    printf("Percentual de aprovados = %.2f\n", percaprovados);
    printf("Percentual de reprovados = %.2f\n", percreprovados);
    printf("Percentual em exame = %.2f\n", percexame);
}