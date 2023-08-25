//  Escreva um algoritmo que leia a idade de 2 homens e 2 mulheres (considere que a idade dos homens será sempre diferente, assim como das mulheres). Calcule e escreva a soma das idades do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a mulher mais velha.

#include <stdio.h>
#include <conio.h>

main() {
    int idadehomem1, idadehomem2, idademulher1, idademulher2, soma, produto;
    printf("Digite a idade do primeiro homem:\n");
    scanf("%d", &idadehomem1);
    printf("Digite a idade do segundo homem (sem repetir):\n");
    scanf("%d", &idadehomem2);
    printf("Digite a idade da primeira mulher:\n");
    scanf("%d", &idademulher1);
    printf("Digite a idade da segunda mulher (sem repetir):\n");
    scanf("%d", &idademulher2);
    if (idadehomem1 > idadehomem2 && idademulher1 > idademulher2) {
        soma = idadehomem1 + idademulher2;
        produto = idadehomem2 * idademulher1;
    } else if (idadehomem1 > idadehomem2 && idademulher2 > idademulher1) {
        soma = idadehomem1 + idademulher1;
        produto = idadehomem2 * idademulher2;
    } else if (idadehomem2 > idadehomem1 && idademulher1 > idademulher2) {
        soma = idadehomem2 + idademulher2;
        produto = idadehomem1 * idademulher1;
    } else if (idadehomem2 > idadehomem1 && idademulher2 > idademulher1) {
        soma = idadehomem2 + idademulher1;
        produto = idadehomem1 * idademulher2;
    }
    printf("Soma = %d\n", soma);
    printf("Produto = %d\n", produto);
}