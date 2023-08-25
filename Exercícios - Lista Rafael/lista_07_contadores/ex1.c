//  Escreva um algoritmo para ler 2 notas de um aluno, calcular e imprimir a média final. Logo após escrever a mensagem "Calcular a média de outro aluno 1.Sim 2.Não?" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente, caso contrário deve ser encerrado imprimindo a quantidade de alunos aprovados (alunos com média igual ou superior a 6).

#include <stdio.h>
#include <conio.h>

main() {
    float n1, n2, media;
    int op, aprovados;
    aprovados = 0;
    do {
        printf("Digite a primeira nota:\n");
        scanf("%f", &n1);
        printf("Digite a segunda nota:\n");
        scanf("%f", &n2);
        media = (n1 + n2) / 2;
        if (media >= 6) {
            aprovados = aprovados + 1;
        }
        printf("Media = %.2f\n", media);
        printf("Calcular a media de outro aluno? (1).SIM ou (2).NAO\n");
        scanf("%d", &op);
    } while (op == 1);
    printf("Aprovados = %d\n", aprovados);
}