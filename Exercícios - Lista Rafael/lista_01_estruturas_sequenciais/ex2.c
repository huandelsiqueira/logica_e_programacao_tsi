#include <stdio.h>
#include <conio.h>

main() {
    int filhos;
    float valorporhora, horastrabalhadas, salario;
    printf("Digite a quantidade de horas trabalhadas:\n");
    scanf("%f", &horastrabalhadas);
    printf("Digite o valor ganho por hora:\n");
    scanf("%f", &valorporhora);
    printf("Digite a quantidade de filhos (apenas dependentes com menos de 14 anos):\n");
    scanf("%d", &filhos);
    salario = valorporhora * horastrabalhadas;
    if (filhos > 0)
        salario = salario + (0.02 * salario) * filhos;
    printf("Salario final = R$ %.2f\n", salario);
}