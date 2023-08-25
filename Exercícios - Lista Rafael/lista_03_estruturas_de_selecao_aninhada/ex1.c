//  Escreva um algoritmo para ler as notas da 1ª e 2ª avaliações de um aluno, calcular a média e escrever se este aluno foi APROVADO, REPROVADO ou se está em EXAME. Escrever também a média calculada.
// OBS: Nota mínima para aprovação: 6,0
// Nota mínima para ter direito ao exame: 3,0.

#include <stdio.h>
#include <conio.h>

main() {
    float nota1, nota2, media;
    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("MEDIA = %.2f\n", media);
    if (media >= 3 && media < 6)
        printf("Voce esta em EXAME!\n");
    else
        if (media >= 6)
            printf("Voce esta APROVADO!\n");
        else 
            if (media < 3)
                printf("Voce esta REPROVADO!\n");
}