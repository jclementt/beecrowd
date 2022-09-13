#include <stdio.h>

void time_conversion(int time)
{
    printf("%i:", time/3600);
    time = time % 3600;
    printf("%i:", time/60);
    time = time % 60;
    printf("%i\n", time);
}

int main(void)
{
    int tempo;

    scanf("%i", &tempo);
    time_conversion(tempo);
    return (0);
}