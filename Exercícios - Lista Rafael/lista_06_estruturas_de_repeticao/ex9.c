// Acrescenta a mensagem "Novo cálculo (1.Sim 2.Não) no fim do programa do exercício 8 de forma a permitir que o usuário possa informar novos dados para o cálculo da divisão.

#include <stdio.h>
#include <conio.h>

main() {
    int op;
    float n1, n2, divisao;
    do {
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
        printf("Novo calculo? (1).SIM ou (2).NAO\n");
        scanf("%d", &op);
    } while (op == 1);
}