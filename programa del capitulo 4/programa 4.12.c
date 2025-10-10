#include <stdio.h>

int suma_divisores(int);

void main(void)
{
    int A, B;
    printf("Ingrese dos números: ");
    scanf("%d %d", &A, &B);

    if (suma_divisores(A) == B && suma_divisores(B) == A)
        printf("\n%d y %d son números amigos.", A, B);
    else
        printf("\n%d y %d no son números amigos.", A, B);
}

int suma_divisores(int NUM)
{
    int I, SUM = 0;
    for (I = 1; I < NUM; I++)
        if (NUM % I == 0)
            SUM += I;
    return SUM;
}
