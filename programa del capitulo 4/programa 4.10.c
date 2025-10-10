#include <stdio.h>
int primo(int);

void main(void)
{
    int NUM;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &NUM);

    if (primo(NUM))
        printf("\n%d es un número primo.", NUM);
    else
        printf("\n%d no es un número primo.", NUM);
}

int primo(int N)
{
    int I, DIV = 0;
    for (I = 1; I <= N; I++)
        if (N % I == 0)
            DIV++;

    if (DIV == 2)
        return 1;
    else
        return 0;
}
