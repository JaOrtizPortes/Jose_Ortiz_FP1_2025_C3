#include <stdio.h>

void main(void)
{
    int A[10], i, X, F = 0;
    for (i = 0; i < 10; i++)
        scanf("%d", &A[i]);
    scanf("%d", &X);
    for (i = 0; i < 10; i++)
        if (A[i] == X)
            F = 1;
    if (F == 1)
        printf("Encontrado");
    else
        printf("No encontrado");
}
