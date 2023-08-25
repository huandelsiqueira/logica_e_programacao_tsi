//EXERCÍCIO 1: Escreva um algoritmo para ler 10 notas, calcular a média e contar quantas possuem nota acima desta média.

#include <stdio.h>
#include <conio.h>

main() {
    int i, c, soma;
    float vetNota[10], media;
    soma = 0;
    c = 0;
    for (i = 0; i <= 9; i++) {
        printf("%d. Digite uma nota:\n", i+1);
        scanf("%f", &vetNota[i]);
    }
    for (i = 0; i <= 9; i++) {
        soma = soma + vetNota[i];
        media = soma / 10;
        if (vetNota[i] > media)
            c = c + 1;
    }
    printf("%d Eh a quantidade de notas ACIMA da media.\n", c);
}
