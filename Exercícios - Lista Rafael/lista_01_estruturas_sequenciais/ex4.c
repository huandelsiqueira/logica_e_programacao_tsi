#include <stdio.h>
#include <conio.h>

main() {
    float tempf, tempc;
    printf("Digite a temperatura em Fahrenheit:\n");
    scanf("%f", &tempf);
    tempc = ((tempf - 32) * 5) / 9;
    printf("A temperatura em Celsius eh = %.2f", tempc);
}