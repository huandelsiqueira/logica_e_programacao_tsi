// Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser zero. Escreva um algoritmo para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo. OBS: O programa deve validar a leitura do segundo valor (que não deve ser zero). Enquanto for fornecido um valor zero a leitura (apenas do segundo valor) deve ser repetida.

#include <stdio.h>
#include <conio.h>

main() {
    float n1, n2, divisao;
    printf("Digite o valor do numerador:\n");
    scanf("%f", &n1);
    do {
        printf("Digite o valor do denominador:\n");
        scanf("%f", &n2);
    } while (n2 == 0);
    divisao = n1 / n2;
    printf("Resultado = %.2f\n", divisao);
}