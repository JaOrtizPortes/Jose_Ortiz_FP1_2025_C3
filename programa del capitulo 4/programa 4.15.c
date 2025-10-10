#include <stdio.h>

long factorial(int);

void main(void)
{
    int N;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &N);

    printf("\nEl factorial de %d es: %ld", N, factorial(N));
}

long factorial(int NUM)
{
    if (NUM == 0)
        return 1;
    else
        return NUM * factorial(NUM - 1);
}
