#include <stdio.h>

void main (void)
{
    float PRE, NPRE;
    printf ("ingrese el precio del producto: ");
    scanf ("%f", &PRE);
    if (PRE > 1500)
    {
        NPRE = PRE * 1.11;
        printf ("\nNuevo precio: %7.2f",NPRE);
    }
}
