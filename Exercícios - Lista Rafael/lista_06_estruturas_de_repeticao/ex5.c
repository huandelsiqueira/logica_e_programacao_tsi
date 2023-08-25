// Escreva um algoritmo para repetir a leitura de uma senha até que ela seja válida. Para cada leitura da senha incorreta informada escrever a mensagem "SENHA INVÁLIDA". Quanto a senha for informada corretamente deve ser impressa a mensagem "ACESSO PERMITIDO" e o algoritmo encerrado. Considere que a senha correta é o valor 2009.

#include <stdio.h>
#include <conio.h>

main() {
    int senha, senhavalida;
    senhavalida = 2009;
    do {
        printf("Digite a senha:\n");
        scanf("%d", &senha);
        if (senha == senhavalida) {
            printf("Acesso PERMITIDO!\n");
        } else {
            printf("Senha invalida!\n");
        }
    } while (senha != senhavalida);
}