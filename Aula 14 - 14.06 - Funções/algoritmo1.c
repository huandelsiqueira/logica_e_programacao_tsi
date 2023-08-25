#include <stdio.h>
#include <conio.h>

float celsius(float);

int main() {
    float c, f;
    printf("Digite a temperatura em graus Fahrenheit:\n");
    scanf("%f", &f);

    c = celsius(f);

    printf("Celsius = %.2f\n", c);

    system("PAUSE");
    return 0;
}

float celsius(float f) {
    float c;
    c = (f - 32) * 5/9;
    return c;
}