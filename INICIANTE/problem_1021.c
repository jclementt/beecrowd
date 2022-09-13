#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void notes_and_coins(double value)
{
   int value2, temp, q_1, q_050, q_025, q_010, q_005, q_001;
   double dec;

   value2 = (int)value;
   printf("NOTAS:\n");
   printf("%i nota(s) de R$ 100.00\n", value2/100);
   value2 %= 100;
   printf("%i nota(s) de R$ 50.00\n", value2/50);
   value2 %= 50;
   printf("%i nota(s) de R$ 20.00\n", value2/20);
   value2 %= 20;
   printf("%i nota(s) de R$ 10.00\n", value2/10);
   value2 %= 10;
   printf("%i nota(s) de R$ 5.00\n", value2/5);
   value2 %= 5;
   printf("%i nota(s) de R$ 2.00\n", value2/2);
   value2 %= 2;
   printf("MOEDAS:\n");
   printf("%i moeda(s) de R$ 1.00\n", value2);
   temp = abs(value);
   dec = value - temp;
   q_050 = abs(dec/0.50);
   dec = fmod(dec, 0.50);
   printf("%i moeda(s) de R$ 0.50\n", q_050);
   q_025 = abs(dec/0.25);
   dec = fmod(dec, 0.25);
   printf("%i moeda(s) de R$ 0.25\n", q_025);
   q_010 = abs(dec/0.10);
   dec = fmod(dec, 0.10);
   printf("%i moeda(s) de R$ 0.10\n", q_010);
   q_005 = abs(dec/0.05);
   dec = fmod(dec, 0.05);
   printf("%i moeda(s) de R$ 0.05\n", q_005); //Está dando problema nessa parte
   q_001 = abs(dec/0.01);
   printf("%i moeda(s) de R$ 0.01\n", q_001); //Está dando problema nessa parte
}

int main(void)
{
    double valor;

    scanf("%lf", &valor);
    if (valor >= 0 && valor <=  1000000.00)
        notes_and_coins(valor);
    return (0);
}