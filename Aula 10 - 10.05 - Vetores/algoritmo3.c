//EXERCÍCIO 3: Ler um vetor "C" de 10 elementos inteiros. Trocar todos os valores negativos por zero. Escrever o vetor "C" modificado.

#include <stdio.h>
#include <conio.h>

main() {
    int i, vetC[10];
    for (i = 0; i <= 9; i++) {
        printf("%d. Digite um valor inteiro:\n", i+1);
        scanf("%d", &vetC[i]);
    }
    for (i = 0; i <= 9; i++) {
        if (vetC[i] < 0)
            printf("vetC[%d] = %d\n", i, 0);
    }
}