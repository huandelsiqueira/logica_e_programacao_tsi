// Escreva um algoritmo para ler as notas de 2 avaliações de uma quantidade indeterminada de alunos. Calcular e escrever a média semestral de cada aluno. O algoritmo deve ser encerrado ao ser fornecido para a nota da primeira avaliação um valor negativo (nesta situação a segunda nota não deve ser lida).

#include <stdio.h>
#include <conio.h>

main() {
    float nota1, nota2, media;
    do {
        printf("Digite a primeira nota:\n");
        scanf("%f", &nota1);
        if (nota1 >= 0) {
            printf("Digite a segunda nota:\n");
            scanf("%f", &nota2);
            media = (nota1 + nota2) / 2;
            printf("Media = %.2f\n", media);
        }
    } while (nota1 >= 0);
}