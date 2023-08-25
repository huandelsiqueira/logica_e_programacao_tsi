//  Ler 10 valores, calcular e escrever a média aritmética destes valores.

#include <stdio.h>
#include <conio.h>

main() {
    int i;
    float valor, media, soma;
    soma = 0;
    for (i = 1; i <= 10; i++) {
        printf("%d. Digite um valor:\n", i);
        scanf("%f", &valor);
        soma = soma + valor;
    }
    media = soma / 10;
    printf("Media = %.2f\n", media);
}