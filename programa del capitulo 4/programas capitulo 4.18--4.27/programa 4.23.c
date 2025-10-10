#include <stdio.h>

void main(void)
{
    int I, J, K;
    for (I = 1; I <= 5; I++)
    {
        for (J = 1; J <= (5 - I); J++)
            printf(" ");
        for (K = 1; K <= I; K++)
            printf("*");
        printf("\n");
    }
}
