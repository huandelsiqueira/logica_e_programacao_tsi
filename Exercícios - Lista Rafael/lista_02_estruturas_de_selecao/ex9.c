// . Tendo como entrada a altura e o sexo de uma pessoa (1-homens 2-mulheres), construa um algoritmo que calcule e imprima seu peso ideal, utilizando as seguintes fórmulas:
// - para homens: (72.7 * h)-58
// - para mulheres: (62.1*h)-44.7

#include <stdio.h>
#include <conio.h>

main() {
    float pesoideal, altura;
    int sexo;
    printf("Digite sua altura (em metros):\n");
    scanf("%f", &altura);
    printf("Digite seu sexo (1).Homem ou (2).Mulher:\n");
    scanf("%d", &sexo);
    if (sexo == 1)
        pesoideal = (72.7 * altura) - 58;
    else
        pesoideal = (62.1 * altura) - 44.7;
    printf("Seu peso ideal eh: %.2f\n", pesoideal);

}