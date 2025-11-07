#include <stdio.h>

void main(void)
{
    int I[3][3], i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (i == j)
                I[i][j] = 1;
            else
                I[i][j] = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", I[i][j]);
        printf("\n");
    }
}
