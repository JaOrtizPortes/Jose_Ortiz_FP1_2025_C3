#include <stdio.h>
float celsius(float);
float fahrenheit(float);

void main(void)
{
    float T;
    int OP;

    printf("Conversión de temperaturas\n");
    printf("1. Celsius a Fahrenheit\n2. Fahrenheit a Celsius\n");
    printf("Seleccione una opción: ");
    scanf("%d", &OP);

    switch (OP)
    {
        case 1:
            printf("Ingrese temperatura en °C: ");
            scanf("%f", &T);
            printf("\n%.2f °C = %.2f °F", T, fahrenheit(T));
            break;

        case 2:
            printf("Ingrese temperatura en °F: ");
            scanf("%f", &T);
            printf("\n%.2f °F = %.2f °C", T, celsius(T));
            break;

        default:
            printf("\nOpción no válida.");
    }
}

float celsius(float F)
{
    return ((F - 32) * 5 / 9);
}

float fahrenheit(float C)
{
    return ((C * 9 / 5) + 32);
}
