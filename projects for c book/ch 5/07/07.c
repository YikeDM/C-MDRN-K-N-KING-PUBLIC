#include <stdio.h>

int main(void) 
{
    int num1, num2, num3, num4, max1, max2, min1, min2;

    printf("Enter 4 integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // is num1 >= num2?
    if(num1 >= num2)
    {
        max1 = num1;
        min1 = num2;
    }
    else
    {
        max1 = num2;
        min1 = num1;
    }
    // is num3 > num4?
    if(num3 >= num4)
    {
        max2 = num3;
        min2 = num4;
    }
    else
    {
        max2 = num4;
        min2 = num3;
    }

    // compare max1 to max2
    if(max1 >= max2)
    {
        printf("Largest: %d\n", max1);
    }
    else
    {
        printf("Largest: %d\n", max2);
    }

    // compare min1 to min2
    if(min1 <= min2)
    {
        printf("Smallest: %d\n", min1);
    }
    else
    {
        printf("Smallest: %d\n", min2);
    }


}