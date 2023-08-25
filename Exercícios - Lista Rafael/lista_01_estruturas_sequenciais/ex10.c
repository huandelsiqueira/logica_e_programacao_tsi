#include <stdio.h>
#include <conio.h>

main() {
    int empregados, bicicletasvendidas;
    float precobicicleta, salariominimo, salariofinal, lucro;
    printf("Digite a quantidade de empregados da loja:\n");
    scanf("%d", &empregados);
    printf("Digite o valor do salario minimo:\n");
    scanf("%f", &salariominimo);
    printf("Digite o preco de custo de cada bicicleta:\n");
    scanf("%f", &precobicicleta);
    printf("Digite a quantidade de bicicletas vendidas:\n");
    scanf("%d", &bicicletasvendidas);
    salariofinal = (2 * salariominimo) + (((0.15 * precobicicleta) * bicicletasvendidas) / empregados);
    lucro = ((0.5 * precobicicleta) * bicicletasvendidas) - (salariofinal * empregados);
    printf("Salario final de cada empregado: R$ %.2f\n", salariofinal);
    printf("Lucro da loja: R$ %.2f\n", lucro);

}