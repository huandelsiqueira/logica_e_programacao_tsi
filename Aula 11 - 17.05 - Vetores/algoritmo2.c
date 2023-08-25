//2.Ler um vetor v de 10 elementos. Troque a seguir o 1° com o último, o 2° com o antipenultimo, o 3° com o 4°, o 5° com o 6°. Imprima o vetor v.
/*
#include <stdio.h>
#include <conio.h>

main() {
    int i, vetV[10], aux;
    for (i = 0; i <= 9; i++) {
        printf("%d. Digite um valor para vetV:\n", i+1);
        scanf("%d", &vetV[i]);
    }
    for (i = 0; i <= 9; i++) {
        aux = vetV[i];
        vetV[i] = vetV[10-i];
        vetV[10-i] = aux;
    }
    for (i = 0; i <= 9; i++) {
        printf("vet[%d] = %d\n", i, vetV[i]);
    }
}
*/

//vetor inicial:  0, 1, 2, 3, 4, 5, 6, 7, 8, 9
//valor inicial:  1, 2, 3, 4, 5, 6, 7, 8, 9, 10
//vetor modific: 10, 9, 8, 7, 6, 5, 4, 3, 2, 1

/*
#include <stdio.h>
#include <conio.h>

main() {
    int i, vetV[10], aux;
    for (i = 0; i <= 9; i++) {
        printf("%d. Digite um valor para vetV[%d]:\n", i+1, i);
        scanf("%d", &vetV[i]);
    }
    for (i = 0; i <= 9; i++) {
        aux = vetV[i];
        vetV[i] = vetV[10-i];
        vetV[10-i] = aux;
    }
    for (i = 0; i <= 9; i++) {
        printf("vetV[%d] = %d\n", i, vetV[i]);
    }
} */

#include <stdio.h>
#include <conio.h>

main() {
    int i, vetV[10], aux;
    for (i = 0; i <= 9; i++) {
        printf("%d. Digite uma valor para vetV[%d]:\n", i+1, i);
        scanf("%d", &vetV[i]);
    }

    //vetor inicial:  0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    //valor inicial:  1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    //vetor modific: 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
    
    for (i = 0; i <= 4; i++) {
        aux = vetV[i];
        vetV[i] = vetV[9-i];
        vetV[9-i] = aux;
    }
    for (i = 0; i <= 9; i++) {
        printf("vetV[%d] = %d\n", i, vetV[i]);
    }
}
