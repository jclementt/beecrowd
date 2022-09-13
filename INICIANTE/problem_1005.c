#include <stdio.h>

void average_1(double n1, double n2)
{
    double media;

    media = ((n1 * 3.5) + (n2 * 7.5)) / 11;
    printf("MEDIA = %.5f\n", media);
}

int main(void)
{
    double nota1, nota2;

    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    average_1(nota1, nota2);
    return (0);
}