//1.Escreva um programa em c para ler um vetor x de 10 valores e um vetor m de 5 valores inteiros. Crie um vetor p de 15 elementos, cujo as 5 primeiras posições seja o vetor m e as 10 últimas o vetor x. Imrpima o vetor p. (CERTO QUE CAI NA PROVA)

/*
#include <stdio.h>
#include <conio.h>

 main() {
    int i, vetX[10], vetM[5], vetP[15];
    for (i = 0; i <= 9; i++) {
        printf("%d. Digite um valor para vetX:\n", i+1);
        scanf("%d", &vetX[i]);
    }
    for (i = 1; i <= 10; i++) {     // essa inicialização em "1" era o erro, deveria inicializar em "0";
            vetP[i+4] = vetX[i];
    }
    for (i = 0; i <= 4; i++) {
        printf("%d. Digite um valor para vetM:\n", i+1);
        scanf("%d", &vetM[i]);
    }
    for (i = 0; i <= 4; i++) {
        vetP[i] = vetM[i];
    }
    for (i = 0; i <= 14; i++) {
        printf("vetP[%d] = %d\n", i, vetP[i]);
    }
} */
#include <stdio.h>
#include <conio.h>

main() {
    int i, vetX[10], vetM[5], vetP[15];
    for (i = 0; i <= 9; i++) {
        printf("%d. Digite um valor para vetX[%d]:\n", i+1, i);
        scanf("%d", &vetX[i]);
    }
    for (i = 0; i <= 9; i++) {
        vetP[i+5] = vetX[i];
    }
    printf("\n");
    for (i = 0; i <= 4; i++) {
        printf("%d. Digite um valor para vetM[%d]:\n", i+1, i);
        scanf("%d", &vetM[i]);
    }
    for (i = 0; i <= 4; i++) {
        vetP[i] = vetM[i];
    }
    for (i = 0; i <= 14; i++) {
        printf("vetP[%d] = %d\n", i, vetP[i]);
    }
}