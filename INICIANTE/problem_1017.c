#include <stdio.h>

void fuel_expenditure(int time, int velocity)
{
    double distance;
    double combustible;

    distance = time * velocity;
    combustible = distance / 12;
    printf("%.3f\n", combustible);
}

int main(void)
{
    int tempo, v_media;

    scanf("%d %d", &tempo, &v_media);
    fuel_expenditure(tempo, v_media);
    return (0);
}