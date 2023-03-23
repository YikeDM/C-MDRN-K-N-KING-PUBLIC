#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if(num < 10)
    {
        printf("The number %d has 1 digit\n", num);
    }
    else if(num >= 10 && num <= 99)
    {
        printf("The number %d has 2 digits\n", num);
    }
    else if(num >= 100 && num <= 999)
    {
        printf("The number %d has 3 digits\n", num);
    }
    else if(num >= 1000 && num <= 9999)
    {
        printf("The number %d has 4 digits\n", num);
    }
    else if(num >= 10000 && num <= 99999)
    {
        printf("The number %d has 5 digits\n", num);
    }
    else
    {
        printf("The number %d is 6 digits or greater\n", num);
    }
}