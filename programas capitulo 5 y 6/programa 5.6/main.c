#include <stdio.h>

void main(void)
{
    int A[10], i, F = 1;
    for (i = 0; i < 10; i++)
        scanf("%d", &A[i]);
    for (i = 0; i < 5; i++)
        if (A[i] != A[9 - i])
            F = 0;
    if (F == 1)
        printf("Palindromo");
    else
        printf("No palindromo");
}
