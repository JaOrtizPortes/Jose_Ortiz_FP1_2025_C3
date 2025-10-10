#include <stdio.h>
long factorial(int);
long combinacion(int, int);

void main(void)
{
    int N, R;
    printf("Ingrese los valores de n y r: ");
    scanf("%d %d", &N, &R);

    if (N >= R)
        printf("\nLas combinaciones son: %ld", combinacion(N, R));
    else
        printf("\nError: n debe ser mayor o igual a r.");
}

long factorial(int NUM)
{
    int I;
    long F = 1;
    for (I = 1; I <= NUM; I++)
        F *= I;
    return F;
}

long combinacion(int N, int R)
{
    return (factorial(N) / (factorial(R) * factorial(N - R)));
}
