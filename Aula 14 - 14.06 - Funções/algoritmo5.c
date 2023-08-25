// 4) ESCREVA UMA FUNÇÃO PARA DADAS 3 NOTAS DE UM ALUNO, CALCULAR E ESCREVER A MÉDIA:

//N1 + 2xN2 + 3xN3 / 6

//E A SITUAÇÃO DO ALUNO: MEDIA (3.4,7.2,8.0)
//	0 - 3 --> REPROVADO
//	3.1 - 5.9 --> EXAME
//	MAIS DE 5.9 --> APROVADO

//PRINTAR ISSO:
//MEDIA:________
//SITUAÇÃO:________

#include <stdio.h>
#include <conio.h>

float aluno(float n1, float n2, float n3);

int main() {
    float n1, n2, n3, media;
    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);
    printf("Digite a terceira nota:\n");
    scanf("%f", &n3);
    aluno(n1, n2, n3);
    return 0;
}

float aluno(float n1, float n2, float n3) {
    float media;
    media = ((n1) + (2 * n2) + (3 * n3)) / 6;
    printf("MEDIA = %.2f\n", media);
    if (media <= 3)
        printf("SITUACAO: REPROVADO.\n");
    else
        if (media > 3 && media <= 5.9)
            printf("SITUACAO: EXAME.\n");
        else
            if (media > 5.9)
                printf("SITUACAO: APROVADO.\n");
    return media;
}