#include <stdio.h>

int value_of_polynominal(int x);


int main(void)
{

    int x; 

    printf("Enter x: ");
    scanf("%d", &x);

    printf("%d\n", value_of_polynominal(x));
    
    return 0;
}


int value_of_polynominal(int x)
{
    int result;

    result = 3 * (x * x * x * x * x);

    result += 2 * (x * x * x * x);

    result -= 5 * (x * x * x);

    result -= (x * x);

    result += 7 * x;

    return result - 6;
}