// Ler a quantidade de alunos existentes em uma turma, ler as notas destes alunos, calcular e imprimir a média aritmética destas notas.

#include <stdio.h>
#include <conio.h>

main() {
    int i, qtd;
    float nota, soma, media;
    soma = 0;
    printf("Quantos alunos tem a turma?\n");
    scanf("%d", &qtd);
    for (i = 1; i <= qtd; i++) {
        printf("%d. Digite uma nota:\n", i);
        scanf("%f", &nota);
        soma = soma + nota;
    }
    media = soma / qtd;
    printf("Media = %.2f\n", media);
}
