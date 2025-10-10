#include <stdio.h>
int fibonacci(int);

void main(void)
{
    int I, N;
    printf("Ingrese el número de términos: ");
    scanf("%d", &N);

    printf("\nSerie de Fibonacci:\n");
    for (I = 1; I <= N; I++)
        printf("%d\t", fibonacci(I));
}

int fibonacci(int N)
{
    if (N == 1 || N == 2)
        return 1;
    else
        return (fibonacci(N - 1) + fibonacci(N - 2));
}
