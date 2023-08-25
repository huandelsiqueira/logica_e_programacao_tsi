//Ler um vetor q de 10 elementos (aceitar somente números positivos). Escreva a seguir o valor do maior elemento de q e a respectiva posição que ele ocupa no vetor.

#include <stdio.h>
#include <conio.h>

main() {
    int i, valor;
    float vetQ[10], maior;
    maior = 0;
    for (i = 0; i <= 9; i++) {
        do {
            printf("%d. Digite um valor para vet[%d]:\n", i+1, i);
            scanf("%f", &vetQ[i]);
        } while (vetQ[i] < 0);
    }
    for (i = 0; i <= 9; i++) {
        if (vetQ[i] > maior)
            maior = vetQ[i];
    }
    for (i = 0; i <= 9; i++) {
        if (vetQ[i] == maior)
            valor = i;
    }
    printf("\nvetQ[%d] = %.2f", valor, maior);
}