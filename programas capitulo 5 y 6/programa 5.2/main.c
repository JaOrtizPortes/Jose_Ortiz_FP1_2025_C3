#include <stdio.h>

void main(void)
{
    int A[10], i, S = 0;
    for (i = 0; i < 10; i++)
        scanf("%d", &A[i]);
    for (i = 0; i < 10; i++)
        S += A[i];
    printf("%d", S);
}

