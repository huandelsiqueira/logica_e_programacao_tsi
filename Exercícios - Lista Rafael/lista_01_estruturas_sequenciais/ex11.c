#include <stdio.h>
#include <conio.h>

main() {
    float comprimentopista, consumo, quantidademinimalitros;
    int voltas, reabastecimentos;
    printf("Digite o comprimento da pista em metros:\n");
    scanf("%f", &comprimentopista);
    printf("Digite a quantidade de voltas:\n");
    scanf("%d", &voltas);
    printf("Digite a quantidade de reabastecimentos:\n");
    scanf("%d", &reabastecimentos);
    printf("Digite o consumo (Km/L):\n");
    scanf("%f", &consumo);
    quantidademinimalitros = (((comprimentopista / 1000) * 70) / (reabastecimentos + 1)) / consumo;
    printf("Quantidade minima de litros: %.2f litros", quantidademinimalitros);
}