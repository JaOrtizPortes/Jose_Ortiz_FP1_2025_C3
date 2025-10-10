#include <stdio.h>

int potencia(int, int);

void main(void)
{
    int X, N;
    printf("Ingrese base y exponente (enteros): ");
    scanf("%d %d", &X, &N);

    printf("\n%d elevado a %d es: %d", X, N, potencia(X, N));
}

int potencia(int BASE, int EXP)
{
    if (EXP == 0)
        return 1;
    else
        return BASE * potencia(BASE, EXP - 1);
}
