#include <stdio.h>

void main(void)
{
    char LET;
    printf("Ingrese una letra: ");
    scanf(" %c", &LET);

    if (LET == 'a' || LET == 'e' || LET == 'i' || LET == 'o' || LET == 'u')
        printf("\nEs una vocal minúscula");
    else
        printf("\nNo es vocal minúscula");
}
