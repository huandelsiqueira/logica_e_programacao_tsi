//  Ler 10 valores e escrever quantos destes valores são negativos.

#include <stdio.h>
#include <conio.h>

main() {
    int i, valor, c;
    c = 0;
    for (i = 1; i <= 10; i++) {
        printf("%d. Digite um valor:\n", i);
        scanf("%d", &valor);
        if (valor < 0) {
            c = c + 1;
        }
    }
    printf("Qtd. de numeros negativos: %d\n", c);
}