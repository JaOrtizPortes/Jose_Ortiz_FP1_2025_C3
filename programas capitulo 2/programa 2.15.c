#include <stdio.h>

void main(void)
{
    int CAL;
    printf("Ingrese la calificación (0-10): ");
    scanf("%d", &CAL);

    switch (CAL)
    {
        case 10: case 9: printf("\nA"); break;
        case 8: printf("\nB"); break;
        case 7: printf("\nC"); break;
        case 6: printf("\nD"); break;
        case 5: case 4: case 3: case 2: case 1: case 0: printf("\nF"); break;
        default: printf("\nCalificación inválida.");
    }
}
