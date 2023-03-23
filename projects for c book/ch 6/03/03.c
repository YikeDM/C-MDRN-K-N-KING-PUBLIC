#include <stdio.h>

int main(void)
{
    int m, n, remainder, numerator, denominator;

    printf("Enter a fraction[ x/y ]: ");
    scanf("%d / %d", &m, &n);

    numerator = m, denominator = n;

    while(n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    // m is lowest divisor
    printf("In lowest terms: %d/%d", numerator / m, denominator / m);
}