//  Escreva um algoritmo para ler o salário mensal e o percentual de reajuste. Calcular e escrever o valor do novo salário.

#include <stdio.h>
#include <conio.h>

main() {
    float salario, percentual, reajuste;
    printf("Digite o salario:\n");
    scanf("%f", &salario);
    printf("Digite o valor do percentual:\n");
    scanf("%f", &percentual);
    reajuste = ((percentual / 100) * salario) + salario;
    printf("O salario reajustado eh: R$ %.2f\n", reajuste);
}