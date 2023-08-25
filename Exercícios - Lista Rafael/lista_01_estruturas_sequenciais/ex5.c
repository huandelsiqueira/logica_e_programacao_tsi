#include <stdio.h>
#include <conio.h>

main() {
    float tempf, tempc;
    printf("Digite a temperatura em Celsius:\n");
    scanf("%f", &tempc);
    tempf = (9 * tempc + 5 * 32) / 5; 
    printf("A temperatura em Fahrenheit eh = %.2f", tempf);
}