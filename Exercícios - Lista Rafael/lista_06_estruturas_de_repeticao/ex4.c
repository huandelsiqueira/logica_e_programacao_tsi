//  Escreva um algoritmo para ler várias duplas de valores (2 valores de cada vez). Escrever para cada dupla uma mensagem que indique se ela foi informada em ordem crescente ou decrescente. A repetição será encerrada ao ser fornecido para os elementos da dupla valores iguais.

#include <stdio.h>
#include <conio.h>

main() {
    int n1, n2;
    do {
        printf("Digite o primeiro valor:\n");
        scanf("%d", &n1);
        printf("Digite o segundo valor:\n");
        scanf("%d", &n2);
        if (n1 > n2) {
            printf("Decrescente!\n");
        } else if (n2 > n1) {
            printf("Crescente!\n");
        }
    } while (n1 != n2);
}