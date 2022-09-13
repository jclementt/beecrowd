#include <stdio.h>

void simple_sum(int A, int B)
{
    int soma;

    soma = A + B;
    printf("SOMA = %d\n", soma);
}

int main(void)
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);
    simple_sum(a, b);
    return (0);
}