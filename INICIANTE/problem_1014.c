#include <stdio.h>

void fuel_consumption(int x, float y)
{
    float tot_fuel;
    
    tot_fuel = x / y;
    printf("%.3f km/l\n", tot_fuel);
}
 
int main(void)
{
    int km;
    float litros;
    
    scanf("%i %f", &km, &litros);
    fuel_consumption(km, litros);
    return (0);
}