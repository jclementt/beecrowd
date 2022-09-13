#include <stdio.h>
#include <stdlib.h>

void the_biggest(int a, int b, int c)
{
    int big_ab, big_abc;
    
    big_ab = (a + b + abs(a - b)) / 2;
    big_abc = big_ab - c;
    if (big_abc > 0)
        printf("%i eh o maior\n", big_ab);
    else
        printf("%i eh o maior\n", c);
}
 
int main(void)
{
    int A, B, C;
    
    scanf("%i %i %i", &A, &B, &C);
    the_biggest(A, B, C);
    return (0);
}