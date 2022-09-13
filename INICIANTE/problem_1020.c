#include <stdio.h>

void age_in_days(int age)
{
    printf("%i ano(s)\n", age/365);
    age = age % 365;
    printf("%i mes(es)\n", age/30);
    age = age % 30;
    printf("%i dia(s)\n", age);
}

int main(void)
{
    int idade;

    scanf("%i", &idade);
    age_in_days(idade);
    return (0);
}