#include <stdio.h>

void main(void)
{
    int ANIO;
    printf("Ingrese el año: ");
    scanf("%d", &ANIO);

    if ((ANIO % 4 == 0 && ANIO % 100 != 0) || (ANIO % 400 == 0))
        printf("\nEl año es bisiesto");
    else
        printf("\nEl año no es bisiesto");
}
