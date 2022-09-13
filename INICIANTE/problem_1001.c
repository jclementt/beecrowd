#include <stdio.h>

void operation_sum(int A, int B)
{
    int X;
    
    X = A + B;
    printf("X = %d\n", X);
}

int main(void)
{
    int a, b;
    
    scanf("%i", &a);
    scanf("%i", &b);
    operation_sum(a, b);
    return (0);
}