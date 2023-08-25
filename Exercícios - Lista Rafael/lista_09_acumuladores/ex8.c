// Escreva um algoritmo que forneça quantos números devem existir em sequência a partir do 1 (1, 2, 3, 4, ...) para que a sua soma ultrapasse a 100 o mínimo possível.

#include <stdio.h>
#include <conio.h>

main() {
    int i, num, c = 0;
    printf("Digite um numero (1 a 100):\n");
    scanf("%d", &num);
    for (i = num; i <= 100; i++) {
        c = c + 1;
    }
    printf("%d  \n", c);
}