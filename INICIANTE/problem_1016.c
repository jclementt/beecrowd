#include <stdio.h>

void    distance_calculation(int d_km)
{
    int time;

    time = d_km * 2;
    printf("%i minutos\n", time);
}

int main(void)
{
    int km;

    scanf("%i", &km);
    distance_calculation(km);
    return (0);
}