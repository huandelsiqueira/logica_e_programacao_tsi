// Reescreva o exercício anterior considerando que o primeiro pode ser maior que o segundo e vice-versa.

#include <stdio.h>
#include <conio.h>

main() {
    int i, soma, n1, n2;
    soma = 0;
    printf("Digite o primeiro valor:\n");
    scanf("%d", &n1);
    printf("Digite o segundo valor:\n");
    scanf("%d", &n2);
    if (n1 < n2)  {
        for (i = n1; i <= n2; i++) {
            soma = soma + i;
        }
    } else {
        for (i = n2; i <= n1; i++) {
            soma = soma + i;
        }
    }
    printf("Soma dos numeros entre %d e %d = %d\n", n1, n2, soma);
}