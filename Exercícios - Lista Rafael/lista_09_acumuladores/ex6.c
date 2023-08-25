//  Escreva um algoritmo para ler a quantidade de alunos de uma turma. Ler as notas das 2 avaliações de cada aluno, calcular e escreva a sua nota final (média aritmética das notas das 2 avaliações). Ao final da digitação escrever também:
// • A média aritmética das notas finais dos alunos aprovados (nota final igual ou superior a 6).
// • O percentual de alunos aprovados em relação ao total de alunos da turma.

#include <stdio.h>
#include <conio.h>

main() {
    int i, qtdtotal, aprovados = 0;
    float media, nota1, nota2, percentual, somaaprovados = 0, mediaaprovados;
    printf("Digite a quantidade de alunos da turma:\n");
    scanf("%d", &qtdtotal);
    for (i = 1; i <= qtdtotal; i++) {
        printf("==Aluno %d==\n", i);
        printf("Digite a primeira nota:\n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota:\n");
        scanf("%f", &nota2);
        media = (nota1 + nota2) / 2;
        printf("Media do aluno = %.1f\n\n", media);
        if (media >= 6) {
            somaaprovados = somaaprovados + media;
            aprovados = aprovados + 1;
        }
    }
    mediaaprovados = somaaprovados / aprovados;
    percentual = (float) (aprovados * 100) / qtdtotal;
    printf("Media dos aprovados = %.1f\n", mediaaprovados);
    printf("Percentual de aprovados: %.1f\n", percentual);
}