//EXERCÍCIO 2: Ler um vetor "x" de 10 elementos com os valores 1,2,3,4,5,6,7,8,9 e 10.

#include <stdio.h>
#include <conio.h>

main() {
    int i, vetX[10];
    for (i = 0; i <= 9; i++) {
        printf("vetX[%d] = %d\n", i, i+1);
    }
}