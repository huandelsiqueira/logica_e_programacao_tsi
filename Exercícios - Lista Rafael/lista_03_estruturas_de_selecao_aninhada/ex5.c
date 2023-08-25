//  Escreva um algoritmo para ler 2 valores e uma das seguintes operações a serem executadas(codificada da seguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação). Calcular e escrever o resultado dessa operação sobre os dois valores lidos.

#include <stdio.h>
#include <conio.h>

main() {
    int operacao;
    float valor1, valor2, resultado;
    printf("Digite o primeiro valor:\n");
    scanf("%f", &valor1);
    printf("Digite o segundo valor:\n");
    scanf("%f", &valor2);
    printf("Digite a operacao (1).Adicao, (2).Subtracao, (3).Divisao ou (4).Multiplicacao:\n");
    scanf("%d", &operacao);
    if (operacao == 1)
        resultado = valor1 + valor2;
    else
        if (operacao == 2)
            resultado = valor1 - valor2;
        else
            if (operacao == 3)
                resultado = valor1 / valor2;
            else
                if (operacao == 4)
                    resultado = valor1 * valor2;
    printf("RESULTADO = %.1f\n", resultado);
}