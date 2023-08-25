// Escreva um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de 0. Para cada número fornecido, imprimir se ele é NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve ser encerrada sem imprimir mensagem alguma.

#include <stdio.h>
#include <conio.h>

main() {
    float numero;
    while (numero != 0) {
        printf("Digite um numero:\n");
        scanf("%f", &numero);
        if (numero > 0) {
            printf("Positivo.\n");
        } else if (numero < 0) {
            printf("Negativo.\n");
        }
    }
}
