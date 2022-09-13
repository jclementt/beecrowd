#include <stdio.h>

void decomposition_values(int value)
{
    printf("%i\n", value);
    printf("%i nota(s) de R$ 100,00\n", value/100);
    value = value % 100;
    printf("%i nota(s) de R$ 50,00\n", value/50);
    value = value % 50;
    printf("%i nota(s) de R$ 20,00\n", value/20);
    value = value % 20;
    printf("%i nota(s) de R$ 10,00\n", value/10);
    value = value % 10;
    printf("%i nota(s) de R$ 5,00\n", value/5);
    value = value % 5;
    printf("%i nota(s) de R$ 2,00\n", value/2);
    value = value % 2;
    printf("%i nota(s) de R$ 1,00\n", value/1);
}
 
int main(void) 
{
    int cedula;
    
    scanf("%i", &cedula);
    if (cedula < 1000000 && cedula > 0)
        decomposition_values(cedula);
    return (0);
}