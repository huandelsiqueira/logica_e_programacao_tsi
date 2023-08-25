//  Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 328014. Deve ser impresso as seguintes mensagens:
// - ACESSO PERMITIDO (caso a senha seja válida).
// - ACESSO NEGADO (caso a senha seja inválida).

#include <stdio.h>
#include <conio.h>

main() {
    int senha, senhavalida;
    senhavalida = 328014;
    printf("Digite a senha de acesso:\n");
    scanf("%d", &senha);
    if (senha == senhavalida)
        printf("ACESSO PERMITIDO!\n");
    else
        printf("ACESSO NEGADO!\n");
}