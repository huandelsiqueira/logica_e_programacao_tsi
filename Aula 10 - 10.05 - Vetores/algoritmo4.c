//EXERCÍCIO 4: Ler um vetor "D" de 10 elementos. Crie um vetor "E" com todos os elementos de "D" (na mesma ordem). Escrever todo o vetor "D" e logo após todo o vetor "E".

#include <stdio.h>
#include <conio.h>

main() {
    int i;
    float vetD[10], vetE[10];
    for (i = 0; i <= 9; i++) {
        printf("%d. Digite uma valor:\n", i+1);
        scanf("%f", &vetD[i]);
    }
    for (i = 0; i <= 9; i++) {
        vetE[i] = vetD[i];
    }
    for (i = 0; i <= 9; i++) {
        printf("vetD[%d] = %.1f\t\tvetE[%d] = %.1f\n", i, vetD[i], i, vetE[i]);
    }
}