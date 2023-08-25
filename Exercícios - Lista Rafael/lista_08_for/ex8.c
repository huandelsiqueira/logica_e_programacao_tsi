//  Escreva um algoritmo para ler dois valores. Aceitar a dupla apenas se o segundo valor informado for maior que o primeiro. Caso isso não aconteça deve ser impressa a mensagem “Valores inválidos” e repetida a leitura dos dois valores. Imprimir os inteiros existentes entre os 2 valores lidos (incluir os valores lidos).

#include <stdio.h>
#include <conio.h>

main() {
    int v1, v2, i;
    do {
        printf("Digite o primeiro valor:\n");
        scanf("%d", &v1);
        printf("Digite o segundo valor:\n");
        scanf("%d", &v2);
        if (v1 >= v2) {
            printf("Valores invalidos.\n");
        }
    } while (v1 >= v2);
    for (i = v1; i <= v2; i++) {
        printf("%d ", i);
    }
}