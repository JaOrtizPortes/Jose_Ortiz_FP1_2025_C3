#include <stdio.h>

void binario(int);

void main(void)
{
    int N;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &N);

    printf("\nEl número %d en binario es: ", N);
    binario(N);
}

void binario(int N)
{
    if (N > 1)
        binario(N / 2);
    printf("%d", N % 2);
}
