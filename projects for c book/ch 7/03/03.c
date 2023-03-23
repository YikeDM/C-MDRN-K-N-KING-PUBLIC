#include <stdio.h>

int main(void)
{
    double dbl, sum = 0;

    printf("This program sums floating values\n");

    printf("Enter floating point numbers(0 to terminate): ");

    do
    {
        scanf("%lf", &dbl);
        sum += dbl;
        printf("Enter next number: ");
    } while (dbl != 0);
    
    printf("The summed value is: %f", sum);

    // not capping %f as user may want the extra precision.
}