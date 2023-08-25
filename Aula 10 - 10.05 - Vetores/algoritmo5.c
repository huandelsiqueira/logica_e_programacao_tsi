//EXERCÍCIO 5: Ler um vetor "Z" de 10 elementos. Crie um vetor "W" com todos os elementos de "Z" (na ordem inversa). Escrever 

#include <stdio.h>
#include <conio.h>

main() {
    int i;
    float vetZ[10], vetW[10];
    for (i = 0; i <= 9; i++) {
        printf("%d. Digite um valor:\n", i+1);
        scanf("%f", &vetZ[i]);
    }
    for (i = 0; i <= 9; i++) {
        vetW[i] = vetZ[9-i];
    }
    for (i = 0; i <= 9; i++) {
        printf("vetZ[%d] = %.1f\t\tvetW[%d] = %.1f\n", i, vetZ[i], i, vetW[i]);
    }
}