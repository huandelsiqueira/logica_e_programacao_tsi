#include <stdio.h>
#include <conio.h>

main() {
    int i, j;
    float matriz[5][5], segundalinha, quartalinha, maiorseg, menorseg, maiorquarta, menorquarta;
    maiorseg = 0;
    maiorquarta = 0;
    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 4; j++) {
            printf("Digite um valor para a Matriz[%d][%d]:\n", i, j);
            scanf("%f", &matriz[i][j]);
            if (i == 1 && matriz[i][j] > maiorseg)
                maiorseg = matriz[i][j];
            if (i == 3 && matriz[i][j] > maiorquarta)
                maiorquarta = matriz[i][j];
        }
    }
    printf("%.1f eh o maior valor da segunda linha.\n", maiorseg);
    printf("%.1f eh o maior valor da quarta linha.\n", maiorquarta);
}