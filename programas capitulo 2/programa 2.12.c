#include <stdio.h>
#include <math.h>

forma ax^2 + bx + c = 0. */

void main(void)
{
    float A, B, C, D, X1, X2;
    printf("Ingrese los coeficientes A, B y C: ");
    scanf("%f %f %f", &A, &B, &C);

    D = B * B - 4 * A * C;

    if (D >= 0) {
        X1 = (-B + sqrt(D)) / (2 * A);
        X2 = (-B - sqrt(D)) / (2 * A);
        printf("\nLas raíces son: %6.2f y %6.2f", X1, X2);
    }
    else
        printf("\nLa ecuación no tiene soluciones reales.");
}
