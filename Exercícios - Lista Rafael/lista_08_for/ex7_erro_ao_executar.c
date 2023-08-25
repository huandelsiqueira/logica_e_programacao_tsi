// Escreva um algoritmo para ler várias duplas de inteiros onde o primeiro representa a quantidade de vezes que o segundo será impresso. Para cada dupla escrever o segundo valor uma quantidade de vezes representada pelo primeiro. Os valores impressos devem ser separados por um espaço em branco. O programa termina ao ser informado um valor negativo ou zero para o primeiro número (nesta situação o segundo não deve ser lido).

#include <stdio.h>
#include <conio.h>

main() {
    int i, v1, v2;
    do {
        printf("Digite um valor n para repetir determinado numero:\n");
        scanf("%d", &v1);
        if (v1 > 0) {
            printf("Digite um valor que sera repetido n vezes:\n");
            scanf("%d", &v2);
            for (i = 1; i <= v1; i++) {
                printf("%d ", v2);
            }
        }
    } while (v1 > 0);
}