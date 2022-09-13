#include <stdio.h>

void circle_area(double raio)
{
    double n, area;

    n = 3.14159;
    area = n * (raio * raio);
    printf("A=%.4f\n", area);
}

int main(void)
{
    double r;

    scanf("%lf", &r);
    circle_area(r);
    return (0);
}