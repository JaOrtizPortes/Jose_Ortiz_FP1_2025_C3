#include <stdio.h>

void main(void)
{
    float CAL;
    printf("Ingrese la calificación: ");
    scanf("%f", &CAL);

    if (CAL >= 60)
        printf("\nAprobado");
    else
        printf("\nReprobado");
}
