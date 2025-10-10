#include <stdio.h>

void main(void)
{
    int I, J, K;
    for (I = 5; I >= 1; I--)
    {
        for (J = 1; J <= (5 - I); J++)
            printf(" ");
        for (K = 1; K <= (2 * I - 1); K++)
            printf("*");
        printf("\n");
    }
}
