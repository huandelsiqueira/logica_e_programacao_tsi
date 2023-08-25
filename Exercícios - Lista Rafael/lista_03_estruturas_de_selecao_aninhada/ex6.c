//  Escreva um algoritmo para ler 3 valores e escrever o maior deles. Considere que o usuário não informará valores iguais.

#include <stdio.h>
#include <conio.h>

main() {
    float n1, n2, n3;
    printf("Digite o primeiro numero:\n");
    scanf("%f", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%f", &n2);
    printf("Digite o terceiro numero:\n");
    scanf("%f", &n3);
    if (n1 > n2 && n1 > n3)
        printf("%.2f eh o maior!\n", n1);
    else
        if (n2 > n1 && n2 > n3)
            printf("%.2f eh o maior\n", n2);
        else
            printf("%.2f eh o maior\n", n3);
}
