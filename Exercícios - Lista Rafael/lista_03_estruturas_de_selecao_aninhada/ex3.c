// Escreva um algoritmo para ler a quantidade de lados de um polígono regular, e a medida do lado (a medida do lado só deve ser lida para polígonos com 3 ou 4 lados). Calcular e imprimir o seguinte:
// • Se a quantidade de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
// • Se a quantidade de lados for igual a 4 escrever QUADRADO e o valor da sua área.
// • Se a quantidade de lados for igual a 5 escrever PENTÁGONO.
// OBS: Considere que o usuário só informará os valores 3, 4 ou 5.

#include <stdio.h>
#include <conio.h>

main() {
    int lados;
    float medida, perimetro, area;
    printf("Digite a quantidade de lados do poligono regular (apenas 3, 4 ou 5):\n");
    scanf("%d", &lados);
    if (lados == 3) {
        printf("Digite a medida do lado:\n");
        scanf("%f", &medida);
        printf("Triangulo\n");
        perimetro = medida * lados;
        printf("Perimetro = %.1f", perimetro);
    } else
        if (lados == 4) { 
            printf("Digite a medida do lado:\n");
            scanf("%f", &medida);   
            printf("Quadrado\n");
            area = medida * medida;
            printf("Perimetro = %.1f", area);
        } else
            if (lados == 5) {
                printf("Pentagono\n");
            }
}
