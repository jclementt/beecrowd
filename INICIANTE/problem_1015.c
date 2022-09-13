#include <stdio.h>
#include <math.h>

void distance_two_points(double x1, double y1, double x2, double y2)
{
    double soma;
    double distance;
    
    soma = pow(x2 - x1, 2) + pow(y2 - y1, 2);
    distance = sqrt(soma);
    printf("%.4f\n", distance);
}
 
int main(void)
{
    double x_1, y_1, x_2, y_2;
    
    scanf("%lf %lf", &x_1, &y_1); 
    scanf("%lf %lf", &x_2, &y_2);
    distance_two_points(x_1, y_1, x_2, y_2);
    return (0);
}