#include <stdio.h>

int main(void)
{
    // variables
    int num1, denom1, num2, denom2, resultnum, resultdenom;
    char ch;
    // ask for fractions and store input (specifically in the format x / x + x / x)
    printf("Enter first fractions separated by an operator: ");
    scanf("%d /%d %c %d /%d", &num1, &denom1, &ch, &num2, &denom2);


    if(ch == '+')
    {
        resultnum = num1 * denom2 + num2 * denom1;
        resultdenom = denom1 * denom2;
    }
    else if(ch == '-')
    {
        resultnum = num1 * denom2 - num2 * denom1;
        resultdenom = denom1 * denom2;
    }
    else if(ch == '*')
    {
        resultnum = num1 * num2;
        resultdenom = denom1 * denom2;
    }
    else if(ch == '/')
    {
        resultnum = num1 / denom2;
        resultdenom = num2 / denom1;
    }
    else
    {
        printf("Error! invalid input\n");
        return 1;
    }
    printf("The result is %d/%d\n", resultnum, resultdenom);

    while(resultnum % 2 == 0 && resultdenom % 2 == 0)
    {
        resultnum /= 2;
        resultdenom /= 2;
    }

    printf("Smallest version: %d/%d\n", resultnum, resultdenom);

    return 0;
}