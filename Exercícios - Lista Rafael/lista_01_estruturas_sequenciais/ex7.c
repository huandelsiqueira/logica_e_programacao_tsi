#include <stdio.h>
#include <conio.h>

main() {
    int eleitores, brancos, nulos, validos;
    float percentualbrancos, percentualnulos, percentualvalidos;
    printf("Digite a quantidade total de eleitores:\n");
    scanf("%d", &eleitores);
    printf("Digite a quantidade de votos brancos:\n");
    scanf("%d", &brancos);
    printf("Digite a quantidade de votos nulos:\n");
    scanf("%d", &nulos);
    printf("Digite a quantidade de votos validos:\n");
    scanf("%d", &validos);
    percentualbrancos = (brancos * 100) / 200;
    percentualnulos = (nulos * 100) / 200;
    percentualvalidos = (validos * 100) / 200;
    printf("Percentual de votos brancos = %.2f\n", percentualbrancos);
    printf("Percentual de votos nulos = %.2f\n", percentualnulos);
    printf("Percentual de votos validos = %.2f\n", percentualvalidos);
}