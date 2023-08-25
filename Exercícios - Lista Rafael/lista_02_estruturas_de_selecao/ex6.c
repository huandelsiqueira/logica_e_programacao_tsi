//  Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, calcular e escrever a média semestral e a seguinte mensagem: ‘PARABÉNS! Você foi aprovado’ somente se o aluno foi aprovado
//  Acrescente ao exercício acima a mensagem ‘Você foi REPROVADO! Estude mais’ caso a média calculada seja menor que 6,0.

#include <stdio.h>
#include <conio.h>

main() {
    float nota1, nota2, media;
    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("A media do aluno eh: %.2f\n", media);
    if (media >= 6)
        printf("PARABENS! Voce foi aprovado.\n");
    else
        printf("Voce foi REPROVADO! Estude mais.\n");
}