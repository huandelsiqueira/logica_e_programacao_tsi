// Escreva um algoritmo que imprima os números ímpares existentes de entre 1 (inclusive) e 9 (inclusive).

#include <stdio.h>
#include <conio.h>

main() {
    int i;
    for (i = 1; i <= 9; i+=2) {
        printf("%d ", i);
    }
}