#include <stdio.h>
#include <conio.h>

main() {
    float salario, percentual, reajuste;
    printf("Digite o salario mensal:\n");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste:\n");
    scanf("%f", &percentual);
    reajuste = (salario * percentual/100) + salario;
    printf("Salario reajustado = R$ %.2f\n", reajuste);
}