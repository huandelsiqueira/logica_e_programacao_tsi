//EXERCÍCIO 6: Ler um vetor "A" de 10 elementos e um valor x. Conte e escreva quantas vezes o valor x ocorre no vetor "A".

#include <stdio.h>
#include <conio.h>

main() {
    int i, c;
    float valorX, vetA[10];
    c = 0;
    for (i = 0; i <= 9; i++) {
        printf("%d. Digite um valor para vetA:\n", i+1);
        scanf("%f", &vetA[i]);
    }
    printf("\n=Digite um valor para X:\n");
    scanf("%f", &valorX);
    for (i = 0; i <= 9; i++) {
        if (valorX == vetA[i]) 
            c = c + 1;
    }
    printf("%d Eh o valor de vezes que X eh igual ao valor de vetA.\n", c);
}