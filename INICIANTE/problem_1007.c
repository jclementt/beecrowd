#include <stdio.h>

void average_2(int n1, int n2, int n3, int n4)
{
    int dif;

    dif = (n1 * n2 - n3 * n4);
    printf("DIFERENCA = %d\n", dif);
}

int main(void)
{
    int nota1, nota2, nota3, nota4;

    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);
    scanf("%d", &nota4);
    average_2(nota1, nota2, nota3, nota4);
    return (0);
}