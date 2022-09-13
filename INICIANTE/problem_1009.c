#include <stdio.h>

void ft_salary(double salary, double tot_sales)
{
    double total;

    total = ((15 * tot_sales) / 100) + salary;
    printf("TOTAL = R$ %.2f\n", total);
}

int main(void)
{
    char *nome;
    double salario, tot_vendas;

    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &tot_vendas);
    ft_salary(salario, tot_vendas);
    return (0);
}