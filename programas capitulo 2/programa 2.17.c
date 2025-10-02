#include <stdio.h>

void main(void)
{
    float P1, P2, P3, EF, TF, CAL;
    printf("Ingrese las tres calificaciones parciales: ");
    scanf("%f %f %f", &P1, &P2, &P3);
    printf("Ingrese la calificación del examen final: ");
    scanf("%f", &EF);
    printf("Ingrese la calificación del trabajo final: ");
    scanf("%f", &TF);

    CAL = (P1 + P2 + P3) * 0.55 / 3 + EF * 0.30 + TF * 0.15;

    printf("\nLa calificación final es: %6.2f", CAL);
}
