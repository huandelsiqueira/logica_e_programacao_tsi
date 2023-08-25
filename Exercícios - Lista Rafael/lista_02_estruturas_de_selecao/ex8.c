// Escreva um algoritmo para ler um valor e escrever se é positivo ou negativo. Considere o valor zero como positivo.

#include <stdio.h>
#include <conio.h>

main() {
    float valor;
    printf("Digite um valor:\n");
    scanf("%f", &valor);
    if (valor > 0)
        printf("Numero eh POSITIVO.\n");
    else
        printf("Numero eh NEGATIVO.\n");
}
