#include <stdio.h>

void main(void)
{
    int I, J;
    for (I = 5; I >= 1; I--)
    {
        for (J = 1; J <= I; J++)
            printf("%d", J);
        printf("\n");
    }
}
