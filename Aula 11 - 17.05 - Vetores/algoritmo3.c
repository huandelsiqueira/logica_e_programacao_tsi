//3.Ler um vetor c de 10 elementos e uma variável v. Escreva a mensagem: "achei seu valor" se o valor em v estiver no vetor c e "nao achei", caso contrário. obs.: a mensagem deverá aparecer uma vez!

/*
#include <stdio.h>
#include <conio.h>

main() {
    int i;
    float valorV, vetC[10];
    for (i = 0; i <= 9; i++) {
        printf("%d. Digite um valor para vetC:\n", i+1);
        scanf("%f", &vetC[i]);
    }
    printf("\n=Digite um valor para V:\n");
    scanf("%f", &valorV);
    for (i = 0; i <= 9; i++) {
        if (vetC[i] == valorV) {
            printf("Achei seu valor!\n");
            break;
            continue;
        }
        else
            if (vetC[i] != valorV) {
            printf("Nao achei seu valor!\n");
            break;
        } 
    }  
} */

#include <stdio.h>
#include <conio.h>

main() {
    int i, vetC[10], valorV, flagACHEI;
    flagACHEI = 0;
    for (i = 0; i <= 9; i++) {
        printf("%d. Digite um valor para vet[%d]:\n", i+1, i);
        scanf("%d", &vetC[i]);
    }
    printf("\nDigite um valor para V:\n");
    scanf("%d", &valorV);
    for (i = 0; i <= 9; i++)
        if (valorV == vetC[i])
            flagACHEI = 1;
    if (flagACHEI == 1)
        printf("\nAchei seu valor!");
    else
        if (flagACHEI != 1)
            printf("\nNao achei seu valor!");
}