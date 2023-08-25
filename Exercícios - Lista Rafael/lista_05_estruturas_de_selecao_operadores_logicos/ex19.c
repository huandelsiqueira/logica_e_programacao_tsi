// O banco GASTADOR Ltda. deseja utilizar o computador para determinar o limite da conta especial de seus clientes a partir do saldo da conta corrente e da poupança. Escreva um algoritmo para ler o saldo da conta corrente e da poupança de um cliente e escrever o seguinte:

// - A mensagem: “SEM CONTA ESPECIAL” se o cliente NÃO possuir o requisito necessário para a conta especial (REQUISITO PARA POSSUIR CONTA ESPECIAL: o saldo em pelo menos uma das duas contas deve estar acima de R$1000,00).

// - O valor do limite da conta conforme especificação abaixo:
// * O valor limite da conta especial fornecido ao cliente deve ser o dobro do maior saldo (entre conta corrente e poupança) ou o tripo do menor saldo. Deve ser fornecido o valor de limite maior entre essas 2 situações.
// OBS: Considere que os saldos da conta corrente e poupança não são iguais.

#include <stdio.h>
#include <conio.h>

main() {
    int flag;
    float saldocorrente, saldopoupanca, saldoespecial;
    flag = 0;
    printf("Digite o saldo da conta corrente:\n");
    scanf("%f", &saldocorrente);
    printf("Digite o saldo da conta poupanca:\n");
    scanf("%f", &saldopoupanca);
    if (saldocorrente > 1000 || saldopoupanca > 1000) {
        flag = 1;
    } else {
        printf("SEM CONTA ESPECIAL.\n");
    }
    if (flag == 1) {
        if (saldocorrente * 2 > saldopoupanca * 3) {
            saldoespecial = saldocorrente * 2;
        } else if (saldocorrente * 3 > saldopoupanca * 2) {
            saldoespecial = saldocorrente * 3;
        } else if (saldopoupanca * 2 > saldocorrente * 3) {
            saldoespecial = saldopoupanca * 2;
        } else {
            saldoespecial = saldopoupanca * 3;
        }
        printf("R$ %.2f\n", saldoespecial);
    }
}