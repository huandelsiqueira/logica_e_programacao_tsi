//  Ler 2 valores (considere que o primeiro valor lido sempre será menor que o segundo), calcular e escrever a soma dos números inteiros existentes entre eles(incluindo os 2 valores lidos na soma).

#include <stdio.h>
#include <conio.h>

main() {
    int i, soma, n1, n2;
    soma = 0;
    printf("Digite o primeiro valor:\n");
    scanf("%d", &n1);
    printf("Digite o segundo valor:\n");
    scanf("%d", &n2);
    if (n1 < n2) {
        for (i = n1; i <= n2; i++) {
            soma = soma + i;
        }
        printf("Soma dos numeros entre %d e %d = %d\n", n1, n2, soma);
    } else {
        printf("[ERRO!] O programa so funciona com o primeiro numero menor que o segundo.\n");
    }
}
