#include <stdio.h>
#include <conio.h>

main() {
    int i;
    char caracter[2];
    for (i = 1; i <= 5; i++) {
        printf("%d. Digite um caracter para saber se eh uma letra maiuscula ou nao:\n", i);
        scanf("%c", &caracter);
        if (caracter >= 'A' && caracter <= 'Z')
            printf("Sim\n");
        else
            printf("Nao\n");
    }
}
