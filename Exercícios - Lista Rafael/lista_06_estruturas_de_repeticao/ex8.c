// Altere a solução do exercício 7 para que seja impressa a mensagem “Valor inválido” caso o segundo valor informado seja ZERO.

#include <stdio.h>
#include <conio.h>

main() {
    float n1, n2, divisao;
    printf("Digite o valor do numerador:\n");
    scanf("%f", &n1);
    do {
        printf("Digite o valor do denominador:\n");
        scanf("%f", &n2);
        if (n2 == 0) {
            printf("Valor invalido!\n");
        }
    } while (n2 == 0);
    divisao = n1 / n2;
    printf("Resultado = %.2f\n", divisao);
}