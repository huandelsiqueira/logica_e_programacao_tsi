// Ler 10 valores e contar quantos estão no intervalo [100,200] e quantos deles estão fora deste intervalo. Escrever o resultado das duas contagens.

#include <stdio.h>
#include <conio.h>

main() {
    int i, valor, dentro, fora;
    dentro = 0;
    fora = 0;
    for (i = 1; i <= 10; i++) {
        printf("%d. Digite um valor:\n", i);
        scanf("%d", &valor);
        if (valor >= 100 && valor <= 200) {
            dentro = dentro + 1;
        } else {
            fora = fora + 1;
        }
    }
    printf("Qtd. de numeros digitados dentro do intervalo [100, 200]: %d\n", dentro);
    printf("Qtd. de numeros digitados fora do intervalo [100, 200]: %d\n", fora);
}