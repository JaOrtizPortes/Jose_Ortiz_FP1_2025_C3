#include <stdio.h>

void main(void)
{
    int I, J;
    for (I = 1; I <= 5; I++)
    {
        for (J = 1; J <= 5; J++)
            printf("*");
        printf("\n");
    }
}
