#include <stdio.h>

void main(void)
{
    float A, B, RES;
    char OP;
    printf("Ingrese la operación (ejemplo: 5 + 2): ");
    scanf("%f %c %f", &A, &OP, &B);

    switch (OP)
    {
        case '+': RES = A + B; printf("\nResultado: %6.2f", RES); break;
        case '-': RES = A - B; printf("\nResultado: %6.2f", RES); break;
        case '*': RES = A * B; printf("\nResultado: %6.2f", RES); break;
        case '/':
            if (B != 0)
                printf("\nResultado: %6.2f", A / B);
            else
                printf("\nError: división entre cero.");
            break;
        default: printf("\nOperador inválido.");
    }
}
