// Escreva um algoritmo para ler as notas de vários alunos, calcular e escrever as seguintes médias. O último dado que não entrará nos cálculos contém uma nota igual a 99.
// • Média das notas dos alunos aprovados (nota maior ou igual a 6)
// • Média das notas dos alunos em exame (nota maior ou igual a 3 e inferior a 6)

#include <stdio.h>
#include <conio.h>

main() {
    float nota, mediaaprovados, mediaexame, qtap, qtex, somaaprovados, somaexame;
    qtap = 0;
    qtex = 0;
    somaaprovados = 0;
    somaexame = 0;
    do {
        printf("Digite uma nota:\n");
        scanf("%f", &nota);
        if (nota >= 6 && nota != 99) {
            somaaprovados = somaaprovados + nota;
            qtap = qtap + 1;
        } else if ((nota >= 3 && nota < 6) && nota != 99) {
            somaexame = somaexame + nota;
            qtex = qtex + 1;
        }
    } while (nota != 99);
    mediaaprovados = somaaprovados / qtap;
    mediaexame = somaexame / qtex;
    printf("Media dos alunos aprovados = %.2f\n", mediaaprovados);
    printf("Media dos alunos em exame = %.2f\n", mediaexame);
}
