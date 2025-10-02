#include <stdio.h>

void main(void)
{
    char LETRA;
    printf("Ingrese una letra: ");
    scanf(" %c", &LETRA);

    if (LETRA >= 'A' && LETRA <= 'Z')
        printf("\nEs una letra mayúscula");
    else
        printf("\nNo es una letra mayúscula");
}
