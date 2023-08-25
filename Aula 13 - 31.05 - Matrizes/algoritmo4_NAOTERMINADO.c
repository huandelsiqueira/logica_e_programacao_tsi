#include <stdio.h>
#include <conio.h>

main() {
    int i, j;
    float matriz[4][4], vetX[8];
    for (i = 0; i <= 3; i++) {
        for (j = 0; j <= 3; i++) {
            printf("Digite um valor para matriz[%d][%d]:\n", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    for (i = 0; i <= 3; i++) {
        vetX[i] = matriz[i][j];
    }
    for (i = 4; i <= 7; i++) {
        vetX[i] = matriz[i][j];
    }
    for (i = 0; i <= 7; i++) {
        printf("%f\n", vetX[i]);
    }
}