#include <stdio.h>
#include <math.h>

void sphere_volume(double r)
{
    double volume;
    double expt;
    
    expt = pow(r, 3);
    volume = (4/3.0) * 3.14159 * expt;
    printf("VOLUME = %.3f\n", volume);
}
 
int main(void) 
{
    double raio;
    
    scanf("%lf", &raio);
    sphere_volume(raio);
    return (0);
}