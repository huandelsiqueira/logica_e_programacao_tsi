//  Escreva um algoritmo para ler 3 inteiros representando respectivamente a quantidade de votos recebidos por três candidatos. A seguir devem ser impressas três linhas de asteriscos, onde cada uma representa graficamente o percentual de votos que cada candidato recebeu. Após cada linha deve ser impresso o percentual de votos de cada candidato. Considere que cada asterisco representa 5%.

#include <stdio.h>
#include <conio.h>

main() {
    int i, voto1, voto2, voto3, total, perc1, perc2, perc3;
    printf("Digite a quantidade de votos para o candidato 1:\n");
    scanf("%d", &voto1);
    printf("Digite a quantidade de votos para o candidato 2:\n");
    scanf("%d", &voto2);
    printf("Digite a quantidade de votos para o candidato 3:\n");
    scanf("%d", &voto3);
    total = voto1 + voto2 + voto3;
    perc1 = (voto1 * 100) / total;
    perc2 = (voto2 * 100) / total;
    perc3 = (voto3 * 100) / total;
    for (i = 1; i <= perc1/5; i++) {
        printf("*");
    }
    printf(" %d\n", perc1);
    for (i = 1; i <= perc2/5; i++) {
        printf("*");
    }
    printf(" %d\n", perc2);
    for (i = 1; i <= perc3/5; i++) {
        printf("*");
    }
    printf(" %d\n", perc3);
}
