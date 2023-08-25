// Escreva um algoritmo para imprimir os números de 5 a 15 utilizando uma estrutura FAÇA/ENQUANTO e um contador.

#include <stdio.h>
#include <conio.h>

main() {
    int c;
    c = 5;
    do {
        printf("%d ", c);
        c++;
    } while (c <= 15);
}