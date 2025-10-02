#include <stdio.h>

void main(void)
{
    int DIA;
    printf("Ingrese un número (1-7): ");
    scanf("%d", &DIA);

    switch (DIA)
    {
        case 1: printf("\nDomingo"); break;
        case 2: printf("\nLunes"); break;
        case 3: printf("\nMartes"); break;
        case 4: printf("\nMiércoles"); break;
        case 5: printf("\nJueves"); break;
        case 6: printf("\nViernes"); break;
        case 7: printf("\nSábado"); break;
        default: printf("\nError: número de día inválido.");
    }
}
