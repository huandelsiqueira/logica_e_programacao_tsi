//5. Ler um vetor x de 10 elementos, a seguir, copie todos os valores negativos do vetor x para o vetor r (sem deixar elementos vazios entre os valores copiados).Escrever o vetor r.

#include <stdio.h>
#include <conio.h>

main() {
    int i, vetX[10], vetR[10], negativos;
    negativos = 0;
    for (i = 0; i <= 9; i++) {
        printf("%d. Digite um valor para vet[%d]:\n", i+1, i);
        scanf("%d", &vetX[i]); 
    }
    for (i = 0; i <= 9; i++) {
        if (vetX[i] < 0) {
            negativos = negativos + 1;
            vetR[i] = vetX[i];
        }
    }

    for (i = 0; i <= negativos; i++) {
        printf("vetR[%d] = %d\n", i, vetR[i]);
    }
}
