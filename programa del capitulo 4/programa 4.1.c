#include <stdio.h>

float suma(float, float); /* Prototipo de función */

void main(void)
{
    float A, B, RES;
    printf("Ingresa dos números: ");
    scanf("%f %f", &A, &B);

    RES = suma(A, B);

    printf("\nLa suma es: %.2f", RES);
}

float suma(float X, float Y)
{
    return (X + Y);
}
