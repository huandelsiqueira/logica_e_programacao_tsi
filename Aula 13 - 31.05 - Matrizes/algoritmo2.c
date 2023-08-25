#include <stdio.h>
#include <conio.h>

main() {
    int i, j;
    float matriz[4][4], soma;
    soma = 0;
    for (i = 0; i <= 3; i++) {
        for (j = 0; j <=3; j++) {
            printf("Digite um valor para Matriz[%d][%d]:\n", i, j);
            scanf("%f", &matriz[i][j]);
            if (i == j)
                soma = soma + matriz[i][j];
        }
    }
    printf("O valor da soma da diagonal principal eh: %.2f\n", soma);
}