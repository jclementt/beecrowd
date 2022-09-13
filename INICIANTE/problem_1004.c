#include <stdio.h>

void simple_product(int a, int b)
{
    int prod;
    
    prod = a * b;
    printf("PROD = %d\n", prod);
}

int main(void)
{
    int v1, v2;
    
    scanf("%d", &v1);
    scanf("%d", &v2);
    simple_product(v1, v2);
    return (0);
}