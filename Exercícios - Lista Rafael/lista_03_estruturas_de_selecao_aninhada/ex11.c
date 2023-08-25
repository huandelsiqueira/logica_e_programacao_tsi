//  Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
// • Infantil A: 5 a 7 anos
// • Infantil B: 8 a 10 anos
// • Juvenil A: 11 a 13 anos
// • Juvenil B: 14 a 18 anos 
// • Sênior: maiores de 18 anos

#include <stdio.h>
#include <conio.h>

main() {
    int idade;
    printf("Digite a idade do nadador:\n");
    scanf("%d", &idade);
    if (idade >= 5 && idade <= 7)
        printf("Infantil A: 5 a 7 anos.\n");
    else
        if (idade >= 8 && idade <= 10)
            printf("Infantil B: 8 a 10 anos.\n");
        else
            if (idade >= 11 && idade <= 13)
                printf("Juvenil A: 11 a 13 anos.\n");
            else
                if (idade >= 14 && idade <= 18)
                    printf("Juvenil B: 14 a 18 anos.\n");
                else
                    if (idade > 18)
                        printf("Senior: maiores de 18 anos.\n");
}