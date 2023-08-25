//5. LER UMA MATRIZ 4.4 COM VALORES INTEIROS. TROQUE OS VALORES NEGATIVOS DA MATRIZ POR ZERO E INFORME QUANTOS VALORES FORAM TROCADOS. IMPRIMIR A MATRIZ MODIFICADA.

#include <stdio.h>
#include <conio.h>

main() {
    int i, j, matriz[4][4], c;
    c = 0;
    for (i = 0; i <= 3; i++) {
        for (j = 0; j <= 3; j++) {
            printf("Digite um valor para a matriz[%d][%d]:\n", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] < 0) {
                c = c + 1;
                matriz[i][j] = 0;
            }
        }
    }
    printf("O numero de valores negativos eh: %d\n", c);
}