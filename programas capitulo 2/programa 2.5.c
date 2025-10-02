#include <stdio.h>

void main(void)
{
    int A, B, C;
    printf("Ingrese tres numeros: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A > B) { int T = A; A = B; B = T; }
    if (A > C) { int T = A; A = C; C = T; }
    if (B > C) { int T = B; B = C; C = T; }

    printf("\nOrden ascendente: %d, %d, %d", A, B, C);
}
