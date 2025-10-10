#include <stdio.h>
#include <math.h>
float potencia(float, int);

void main(void)
{
    float X;
    int N;
    printf("Ingresa la base y el exponente: ");
    scanf("%f %d", &X, &N);

    printf("\n%.2f elevado a %d es: %.2f", X, N, potencia(X, N));
}

float potencia(float BASE, int EXP)
{
    int I;
    float RES = 1;
    for (I = 1; I <= EXP; I++)
        RES *= BASE;
    return RES;
}
