#include <stdio.h>

void main(void)
{
    int A[10], i;
    float P, S = 0;
    for (i = 0; i < 10; i++)
        scanf("%d", &A[i]);
    for (i = 0; i < 10; i++)
        S += A[i];
    P = S / 10;
    printf("%.2f", P);
}
