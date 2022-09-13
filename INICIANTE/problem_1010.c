#include <stdio.h>

void simple_calculation(int n1, int n2, double v_u1, double v_u2)
{
    double value;
    
    value = (n1 * v_u1) + (n2 * v_u2);
    printf("VALOR A PAGAR: R$ %.2f\n", value);
}
 
int main(void) 
{
    int cod1, num1, num2, cod2;
    double vlr_unit1, vlr_unit2;
 
    scanf("%d %d %lf", &cod1, &num1, &vlr_unit1);
    scanf("%d %d %lf", &cod2, &num2, &vlr_unit2);
    simple_calculation(num1, num2, vlr_unit1, vlr_unit2);
    return (0);
}