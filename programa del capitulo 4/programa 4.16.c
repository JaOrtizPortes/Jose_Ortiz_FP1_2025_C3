#include <stdio.h>

int mcd(int, int);

void main(void)
{
    int A, B;
    printf("Ingrese dos números enteros positivos: ");
    scanf("%d %d", &A, &B);

    printf("\nEl MCD de %d y %d es: %d", A, B, mcd(A, B));
}

int mcd(int A, int B)
{
    if (B == 0)
        return A;
    else
        return mcd(B, A % B);
}
