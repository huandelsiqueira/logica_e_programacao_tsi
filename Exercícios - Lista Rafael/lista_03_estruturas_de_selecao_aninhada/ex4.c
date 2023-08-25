//  Acrescente as seguintes mensagens a solução do exercício anterior conforme o caso.
// • Caso a quantidade de lados seja inferior a 3 escrever NÃO E’ UM POLÍGONO.
// • Caso a quantidade de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO.
// OBS: Considere que o usuário poderá informar qualquer valor para o número de lados.

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
            } else
                if (lados != 3 && lados != 4 && lados != 5)
                    printf("Poligono nao identificado.\n");
                else
                    printf("Nao eh um poligono.\n");
}