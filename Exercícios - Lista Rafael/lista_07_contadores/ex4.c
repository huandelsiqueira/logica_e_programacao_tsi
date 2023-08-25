//  Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234.
// OBS: Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser impressa e repetida a solicitação de uma nova senha até que ela seja válida. Caso contrário deve ser impressa a mensagem "ACESSO PERMITIDO" junto com um número que representa quantas vezes a senha foi informada.

#include <stdio.h>
#include <conio.h>

main() {
    int senha, senhavalida, tentativas;
    senhavalida = 1234;
    tentativas = 0;
    do {
        printf("Digite uma senha:\n");
        scanf("%d", &senha);2020
        if (senha != senhavalida) {
            tentativas = tentativas + 1;
            printf("Acesso NEGADO!\n");
        } 
    } while (senha != senhavalida);
    printf("Acesso PERMITIDO!\n");
    printf("Qtd. de vezes que a senha foi informada = %d\n", tentativas);
}
