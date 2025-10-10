#include <stdio.h>
long factorial(int);

void main(void)
{
    int N;
    printf("Ingresa un número entero positivo: ");
    scanf("%d", &N);

    printf("\nEl factorial de %d es: %ld", N, factorial(N));
}

long factorial(int NUM)
{
    int I;
    long F = 1;
    for (I = 1; I <= NUM; I++)
        F *= I;
    return F;
}
