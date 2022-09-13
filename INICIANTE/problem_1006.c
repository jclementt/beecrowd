#include <stdio.h>

void average_2(double n1, double n2, double n3)
{
    double media;

    media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
    printf("MEDIA = %.1f\n", media);
}

int main(void)
{
    double nota1, nota2, nota3;

    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    scanf("%lf", &nota3);
    average_2(nota1, nota2, nota3);
    return (0);
}