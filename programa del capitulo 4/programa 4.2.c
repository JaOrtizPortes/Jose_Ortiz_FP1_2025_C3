#include <stdio.h>

float cuadrado(float);

void main(void)
{
    float NUM, RES;
    printf("Ingresa un número: ");
    scanf("%f", &NUM);

    RES = cuadrado(NUM);
    printf("\nEl cuadrado de %.2f es: %.2f", NUM, RES);
}

float cuadrado(float X)
{
    return (X * X);
}
