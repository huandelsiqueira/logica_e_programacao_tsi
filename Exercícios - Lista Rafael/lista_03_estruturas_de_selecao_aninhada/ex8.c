// Escreva um algoritmo para ler 3 valores e escrevê-los em ordem crescente. Considere que o usuário não informará valores iguais.

#include <stdio.h>
#include <conio.h>

main() {
    float n1, n2, n3;
    printf("Digite o primeiro valor:\n");
    scanf("%f", &n1);
    printf("Digite o segundo valor:\n");
    scanf("%f", &n2);
    printf("Digite o terceiro valor:\n");
    scanf("%f", &n3);
    if (n1 > n2 && n2 > n3)
        printf("%.2f > %.2f > %.2f\n", n3, n2, n1);
    else
        if (n2 > n1 && n1 > n3)
            printf("%.2f > %.2f > %.2f\n", n3, n1, n2);
        else
            if (n3 > n1 && n1 > n2)
                printf("%.2f > %.2f > %.2f\n", n2, n1, n3);
            else
                if (n3 > n2 && n2 > n1)
                    printf("%.2f > %.2f > %.2f\n", n1, n2, n3);
                else
                    if (n1 > n3 && n3 > n2)
                        printf("%.2f > %.2f > %.2f\n", n2, n3, n1);
                    else 
                        if (n2 > n3 && n3 > n1)
                            printf("%.2f > %.2f > %.2f\n", n1, n3, n2);
}