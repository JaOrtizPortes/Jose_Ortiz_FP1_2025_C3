#include <stdio.h>

void main(void)
{
    int A[10], i, j, aux;
    for (i = 0; i < 10; i++)
        scanf("%d", &A[i]);
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9 - i; j++)
            if (A[j] > A[j + 1])
            {
                aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
            }
    for (i = 0; i < 10; i++)
        printf("%d ", A[i]);
}
