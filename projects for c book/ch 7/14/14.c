#include <stdio.h>
#include <math.h>

int main(void)
{
    double num, y, average;

    printf("Enter a positive number: ");
    scanf("%lf", &num);


    while(1)
    {
        average = (y + (num / y)) / 2;
        if(fabs(y - average) < 0.00001f)
        {
            break;
        }
        y = average;
    }

    printf("Average of y and x/y: %f\n", y);
    
}