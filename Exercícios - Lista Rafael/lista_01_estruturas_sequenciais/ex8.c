#include <stdio.h>
#include <conio.h>

main() {
    int reprovadosc, aprovadosd;
    float percentualc, percentuald, percentualtotal;
    printf("Digite o percentual de alunos reprovados da turma C:\n");
    scanf("%f", &percentualc);
    printf("Digite  o percentual de alunos aprovados da turma D:\n");
    scanf("%f", &percentuald);
    reprovadosc = (percentualc * 60) / 100;
    aprovadosd = 20 - ((percentuald * 20) / 100);
    percentualtotal = ((reprovadosc + aprovadosd) * 100) / 80;
    printf("Quantidade de alunos reprovados da turma C: %d\n", reprovadosc);
    printf("Quantidade de alunos reprovados da turma D: %d\n", aprovadosd);
    printf("Percentual de alunos reprovados em relacao ao total de launos das duas turmas: %.2f\n", percentualtotal);
 }