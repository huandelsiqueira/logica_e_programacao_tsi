// Escreva um algoritmo para ler as coordenadas (X, Y) de um ponto no sistema cartesiano e escrever o quadrante ao qual o ponto pertence. Considere que o usuário não informará nenhuma coordenada igual a zero.

#include <stdio.h>
#include <conio.h>

main() {
    int x, y;
    printf("Digite a coordenada de X (valores diferentes de 0):\n");
    scanf("%d", &x);
    printf("Digite a coordenada de Y (valores diferentes de 0):\n");
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
}
