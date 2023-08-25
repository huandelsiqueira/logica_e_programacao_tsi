//  Escreva um algoritmo para ler as 4 notas obtidas por um aluno em 4 avaliações. Calcular a média usando a seguinte fórmula:

// 𝑀é𝑑𝑖𝑎 = (𝑛1+ 𝑛2𝑥2 + 𝑛3𝑥3 +𝑛4) / 7

// A seguir imprima a média e o conceito do aluno baseado na seguinte tabela:

// Média                            Conceito
// 9,0 ou acima de 9,0              A
// entre 7,5 (inclusive) e 9,0      B
// entre 6,0 (inclusive) e 7,5      C
// abaixo de 6,0                    D

#include <stdio.h>
#include <conio.h>

main() {
    float n1, n2, n3, n4, media;
    printf("Digite a 1a nota:\n");
    scanf("%f", &n1);
    printf("Digite a 2a nota:\n");
    scanf("%f", &n2);
    printf("Digite a 3a nota:\n");
    scanf("%f", &n3);
    printf("Digite a 4a nota:\n");
    scanf("%f", &n4);
    media = (n1 + 2*n2 + 3*n3 + n4) / 7;
    printf("Media = %.2f\n", media);
    if (media >= 9) {
        printf("Conceito: A\n");
    } else if (media >= 7.5 && media < 9) {
        printf("Conceito: B\n");
    } else if (media >= 6 && media < 7.5) {
        printf("Conceito: C\n");
    } else if (media < 6) {
        printf("Conceito: D\n");
    }
}