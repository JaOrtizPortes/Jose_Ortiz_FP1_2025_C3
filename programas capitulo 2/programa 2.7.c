#include <stdio.h>

void main(void)
{
    int A, B, C, MAY;
    printf("Ingrese tres números: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A > B)
        MAY = A;
    else
        MAY = B;

    if (C > MAY)
        MAY = C;

    printf("\nEl mayor es: %d", MAY);
}
