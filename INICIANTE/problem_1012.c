#include <stdio.h>
#include <math.h>
 
void area_calculation(double a, double b, double c)
{
    double area_tr, area_ci, area_tp, area_qd, area_rt;
    double tr, ci, tp, qd, rt;
    
    tr = (a * c) / 2;
    ci = 3.14159 * pow(c, 2);
    tp = ((a + b) * c) / 2;
    qd = b * b;
    rt = a * b;
    printf("TRIANGULO: %.3f\n", tr);
    printf("CIRCULO: %.3f\n", ci);
    printf("TRAPEZIO: %.3f\n", tp);
    printf("QUADRADO: %.3f\n", qd);
    printf("RETANGULO: %.3f\n", rt);
}

int main(void)
{
    double A, B, C;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    area_calculation(A, B, C);
    return (0);
}