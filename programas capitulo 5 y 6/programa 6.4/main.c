#include <stdio.h>

void main(void)
{
    int M[3][3], T[3][3], i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &M[i][j]);
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            T[i][j] = M[j][i];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", T[i][j]);
        printf("\n");
    }
}
