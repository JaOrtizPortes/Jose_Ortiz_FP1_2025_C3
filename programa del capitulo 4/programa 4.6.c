#include <stdio.h>
float mayor(float, float, float);

void main(void)
{
    float A, B, C;
    printf("Ingrese tres números: ");
    scanf("%f %f %f", &A, &B, &C);

    printf("\nEl mayor es: %.2f", mayor(A, B, C));
}

float mayor(float X, float Y, float Z)
{
    float M = X;
    if (Y > M)
        M = Y;
    if (Z > M)
        M = Z;
    return M;
}
