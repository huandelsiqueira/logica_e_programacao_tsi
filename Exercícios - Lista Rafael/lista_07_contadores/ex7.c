//  Eustógio resolveu fazer uma viagem para conhecer o nosso país. Ele pretende visitar várias cidades, dividindo assim a viagem em vários trechos. Entretanto, Eustógio nega-se a passar por estradas cujo custo do pedágio exceda um determinado valor. Escreva um algoritmo para ler inicialmente o valor de pedágio acima do qual Eustógio nega-se a pagar. A seguir ler várias duplas de valores representando respectivamente o custo do pedágio e a distância (em Km) do trecho. Calcular e escrever.
//• Quantos trechos da viagem possuem um valor de pedágio acima do qual Eustógio nega-se a pagar.
//• Quantos trechos foram informados.
//• Quantos trechos acima de 150 Km de distância possuem um valor de pedágio que Eustógio concorda em pagar.
//OBS: O algoritmo será encerrado ao ser fornecido um valor de pedágio negativo. Neste caso a leitura da distância não deve ser executada. Os resultados devem ser impressos no final do algoritmo.

#include <stdio.h>
#include <conio.h>

main() {
    int acimadopreco, total, precoaceito;
    float precopedagio, distancia, precodesejado;
    acimadopreco = 0;
    precoaceito = 0;
    total = 0;
    printf("Digite o preco do pedagio desejado:\n");
    scanf("%f", &precodesejado);
    do {
        printf("Qual o preco do pedagio:\n");
        scanf("%f", &precopedagio);
        if (precopedagio > 0) {
            total = total + 1;
            printf("Digite a distancia ate o pedagio:\n");
            scanf("%f", &distancia);
            if (precopedagio > precodesejado) {
                acimadopreco = acimadopreco + 1;
            } else if (distancia > 150) {
                precoaceito = precoaceito + 1;
            }
        }
    } while (precopedagio >= 0);
    printf("Trechos com valor acima = %d\n", acimadopreco);
    printf("Quantidade de pedagios informados = %d\n", total);
    printf("Trechos acima de 150 com valor aceito = %d\n", precoaceito);
}
