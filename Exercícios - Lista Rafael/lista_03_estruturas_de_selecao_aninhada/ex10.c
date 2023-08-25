//  Escreva um algoritmo para ler as coordenadas (X, Y) de um ponto no sistema cartesiano e escrever o quadrante ao qual o ponto pertence. Se o ponto estiver sobre os eixos, ou na origem, escrever NÃO ESTÁ EM NENHUM QUADRANTE. Considere que o usuário poderá informar qualquer valor para as coordenadas.

#include <stdio.h>
#include <conio.h>

main() {
    int x, y;
    printf("Digite a coordenada de X:\n");
    scanf("%d", &x);
    printf("Digite a coordenada de Y:\n");
    scanf("%d", &y);
    if (x > 0 && y > 0)
        printf("Q = I\n");
    else
        if (x < 0 && y > 0)
            printf("Q = II\n");
        else
            if (x < 0 && y < 0)
                printf("Q = III\n");
            else
                if (x > 0 && y < 0)
                    printf("Q = IV\n");
                else 
                    if (x == 0 && y == 0)
                        printf("Nenhum quadrante\n");
                    else
                        if (x != 0 && y == 0)
                            printf("Nenhum quadrante\n");
                        else
                            if (x == 0 && y != 0)
                                printf("Nenhum quadrante\n");
}