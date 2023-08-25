//  Suponha que exista um prédio de 20 andares com três elevadores, identificados pelos números 1, 2 e 3. Para otimizar o sistema de controle dos elevadores, foi realizado um levantamento no qual cada usuário respondia qual o elevador que utilizava com mais frequência. Escreva um algoritmo para ler as respostas (códigos 1, 2 ou 3) de vários usuários do prédio calcule e imprima o identificador do elevador mais frequentado. O algoritmo termina ao ser informado um identificador inválido para o elevador.

#include <stdio.h>
#include <conio.h>

main() {
    int resp, elev1 = 0, elev2 = 0, elev3 = 0;
    do {
        printf("Qual eh o elevador que voce mais usa? (apenas respostas: 1, 2 ou 3)\n");
        scanf("%d", &resp);
        if (resp == 1) {
            elev1 = elev1 + 1;
        } else if (resp == 2) {
            elev2 = elev2 + 1;
        } else if (resp == 3) {
            elev3 = elev3 + 1;
        }
    } while (resp == 1 || resp == 2 || resp == 3);
    if (elev1 > elev2 || elev1 > elev3) {
        printf("Elevador 1\n");
    } else if (elev2 > elev1 || elev2 > elev3) {
        printf("Elevador 2\n");
    } else {
        printf("Elevador 3\n");
    }
}