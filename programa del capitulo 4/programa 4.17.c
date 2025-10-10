#include <stdio.h>

int mcd(int, int);
int mcm(int, int);

void main(void)
{
    int A, B;
    printf("Ingrese dos números enteros positivos: ");
    scanf("%d %d", &A, &B);

    printf("\nEl MCM de %d y %d es: %d", A, B, mcm(A, B));
}

int mcd(int A, int B)
{
    if (B == 0)
        return A;
    else
        return mcd(B, A % B);
}

int mcm(int A, int B)
{
    return (A * B) / mcd(A, B);
}
