#include <stdio.h>

int main(void)
{
    float num1, num2 = 0.0f;
    int i = 1;

    while(i)
    {
        printf("Enter a number: ");
        scanf("%f", &num1);
        if(num1 >= num2)
        {
            num2 = num1;
        }
        if(num1 <= 0)
        {
            i = 0;
        }
    }
    printf("The largest number was: %f", num2);
    // rounding error -- digits showing .0 error
}