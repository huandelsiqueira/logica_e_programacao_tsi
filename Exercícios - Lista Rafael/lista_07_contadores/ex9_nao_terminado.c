// Escreva um algoritmo que leia vários valores e imprima quantos valores informados são menores que o imediatamente anterior. O algoritmo termina a ser informado um número negativo (que não deve ser considerado na contagem).

#include <stdio.h>
#include <conio.h>

main() {
    int num, maior, c;
    maior = 0;
    c = 0;
    do {
        printf("Digite um numero:\n");
        scanf("%d", &num);
        if (num >= 0) {
            if (num > maior) {
                maior = num;
                c = c + 1;
            }
        }
    } while (num >= 0);
    printf("%d\n", c);
}