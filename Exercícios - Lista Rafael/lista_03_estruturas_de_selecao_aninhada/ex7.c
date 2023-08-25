// Escreva um algoritmo para ler 3 valores e escrever a soma dos 2 maiores. Considere que ousuário não informará valores iguais.

#include <stdio.h>
#include <conio.h>

main() {
    float n1, n2, n3, resultado;
    printf("Digite o primeiro valor:\n");
    scanf("%f", &n1);
    printf("Digite o segundo valor:\n");
    scanf("%f", &n2);
    printf("Digite o terceiro valor:\n");
    scanf("%f", &n3);
    if (n1 > n2 && n2 > n3)
        resultado = n1 + n2;
    else
        if (n1 > n2 && n3 > n2)
            resultado = n1 + n3;
        else
            resultado = n2 + n3;
    printf("Resultado = %.2f\n", resultado);
}