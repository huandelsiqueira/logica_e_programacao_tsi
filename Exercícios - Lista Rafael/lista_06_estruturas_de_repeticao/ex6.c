// Escreva um algoritmo para ler as coordenadas (X, Y) de vários pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando o usuário informar um valor NULO (zero) para a coordenada X (nesta situação sem fazer a leitura da coordenada Y). OBS: Considere que não será informado um valor igual a 0 para Y.

#include <stdio.h>
#include <conio.h>

main() {
    float x, y;
    do {
        printf("Digite um valor para x:\n");
        scanf("%f", &x);
        if (x != 0) {
            printf("Digite um valor para y:\n");
            scanf("%f", &y);
            if (x > 0 && y > 0) {
                printf("Primeiro Q.\n");
            } else if (x < 0 && y > 0) {
                printf("Segundo Q.\n");
            } else if (x < 0 && y < 0) {
                printf("Terceiro Q.\n");
            } else {
                printf("Quarto Q.\n");
            }
        }
    } while (x != 0);
}