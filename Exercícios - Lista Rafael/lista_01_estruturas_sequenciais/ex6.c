#include <stdio.h>
#include <conio.h>

main() {
    float comprimento, largura, altura;
    int caixas;
    printf("Digite um valor para o comprimento:\n");
    scanf("%f", &comprimento);
    printf("Digite um valor para a largura:\n");
    scanf("%f", &largura);
    printf("Digite um valor parra a altura:\n");
    scanf("%f", &altura);
    caixas = (comprimento * altura * 2) + (largura * 2) / 1.5;
    printf("Numero de caixas de azulejos: %d\n", caixas);
}