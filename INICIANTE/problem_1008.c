#include <stdio.h>

void salario(int n, int h, double v_h)
{
    double salario;

    salario = h * v_h;
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", salario);
}

int main(void)
{
    int numero, horas;
    double valor_hora;

    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%lf", &valor_hora);
    salario(numero, horas, valor_hora);
    return (0);
}