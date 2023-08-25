#include <stdio.h>
#include <conio.h>

main() {
    int i, j;
    float media[5][5], soma, mediafinal;
    soma = 0;
    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 4; j++) {
            printf("Digite um valor para Media[%d][%d]:\n", i, j);
            scanf("%f", &media[i][j]);
            soma = soma + media[i][j];
        }
    }
    mediafinal = soma / 25;
    printf("A media da turma eh: %.2f", mediafinal);
}