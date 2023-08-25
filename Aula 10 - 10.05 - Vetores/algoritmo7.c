//EXERCÍCIO 7: Ler um vetor "B" de 10 elementos e um valor x. Escreva as posições do vetor "B" em que aparece um valor igual a x.

#include <stdio.h>
#include <conio.h>

main() {
    int i;
    float vetB[10], valorX;
    for (i = 0; i <= 9; i++) {
        printf("%d. Digite uma valor para vetB:\n", i+1);
        scanf("%f", &vetB[i]);
    }
    printf("\n=Digite uma valor para X:\n");
    scanf("%f", &valorX);
    printf("\nO valor de X eh igual ao valor de vetB nas posicoes:\n");
    for (i = 0; i <= 9; i++) {
        if (valorX == vetB[i]) 
            printf("\nvetB[%d]\n", i);
    }
}