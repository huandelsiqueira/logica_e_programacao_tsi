// Escreva um algoritmo que dado um número de 1 a 7 deverá ser informado o dia da semana. 
// 1 - Domingo 
// 2 - Segunda-feira
// 3 - Terça-feira
// 4 - Quarta-feira
// 5 - Quinta-feira
// 6 - Sexta-feira
// 7 - Sábado

#include <stdio.h>
#include <conio.h>

main() {
    int dia;
    printf("Digite um numero, entre 1 e 7, para ser informado o dia da semana:\n");
    scanf("%d", &dia);
    if (dia == 1)
        printf("Domingo\n");
    else
        if (dia == 2)
            printf("Segunda-feira\n");
        else
            if (dia == 3)
                printf("Terca-feira\n");
            else
                if (dia == 4)
                    printf("Quarta-feira\n");
                else
                    if (dia == 5)
                        printf("Quinta-feira\n");
                    else
                        if (dia == 6)
                            printf("Sexta-feira\n");
                        else
                            if (dia == 7)
                                printf("Sabado\n");
}