#include <stdio.h>

int perfecto(int);

void main(void)
{
    int N;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &N);

    if (perfecto(N))
        printf("\n%d es un número perfecto.", N);
    else
        printf("\n%d no es un número perfecto.", N);
}

int perfecto(int NUM)
{
    int I, SUM = 0;
    for (I = 1; I < NUM; I++)
        if (NUM % I == 0)
            SUM += I;
    return (SUM == NUM);
}
